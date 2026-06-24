import time
import random
import math

from graficos import salvar_dados_e_gerar_graficos

class BlocoMemoria:
    def __init__(self, inicio, tamanho, tenant_id=None, alloc_id=None):
        self.inicio = inicio
        self.tamanho = tamanho
        self.tenant_id = tenant_id
        self.alloc_id = alloc_id

    @property
    def livre(self):
        return self.tenant_id is None

    def __repr__(self):
        estado = "LIVRE" if self.livre else f"OCUPADO (Tenant: {self.tenant_id}, ID: {self.alloc_id})"
        return f"[{self.inicio} - {self.inicio + self.tamanho - 1}] ({self.tamanho}MB) -> {estado}"

class CloudServer:
    def __init__(self, tamanho_total_mb, tamanho_pagina_mb=32):
        self.tamanho_total = tamanho_total_mb
        self.tamanho_pagina = tamanho_pagina_mb # Simula paginação ou slots fixos de alocação
        self.memoria = [BlocoMemoria(0, tamanho_total_mb)]
        self.algoritmo_atual = None # Guarda qual algoritmo está rodando para aplicar a lógica de coalescência correta
        self.metricas = {
            'alocacoes_sucesso': 0,
            'alocacoes_falha': 0,
            'tempo_total_alocacao': 0.0,
            'fragmentacao_externa_media': 0.0,
            'fragmentacao_interna_total': 0, 
            'ciclos': 0
        }

    def _proximo_potencia_de_2(self, n):
        """Encontra a próxima potência de 2 maior ou igual a n"""
        if n <= 0:
            return 1
        # Se já for potência de 2, retorna n, senão calcula a próxima
        if (n & (n - 1)) == 0:
            return n
        return 1 << (n.bit_length())

    def alocar(self, tenant_id, tamanho_solicitado, algoritmo="first_fit"):
        inicio_tempo = time.perf_counter()
        self.algoritmo_atual = algoritmo
        
        paginas_necessarias = math.ceil(tamanho_solicitado / self.tamanho_pagina)
        tamanho_alocar = paginas_necessarias * self.tamanho_pagina
        frag_interna_ciclo = tamanho_alocar - tamanho_solicitado
        
        # No Buddy System, o tamanho alocado DEVE ser uma potência de 2
        if algoritmo == "buddy_system":
            tamanho_alocar = self._proximo_potencia_de_2(tamanho_alocar)
            frag_interna_ciclo = tamanho_alocar - tamanho_solicitado
            
        bloco_escolhido = None
        indice_escolhido = -1

        # Lógica dos algoritmos
        if algoritmo == "first_fit":
            for i, bloco in enumerate(self.memoria):
                if bloco.livre and bloco.tamanho >= tamanho_alocar:
                    bloco_escolhido = bloco
                    indice_escolhido = i
                    break
        elif algoritmo == "best_fit":
            menor_sobra = float('inf')
            for i, bloco in enumerate(self.memoria):
                if bloco.livre and bloco.tamanho >= tamanho_alocar:
                    sobra = bloco.tamanho - tamanho_alocar
                    if sobra < menor_sobra:
                        menor_sobra = sobra
                        bloco_escolhido = bloco
                        indice_escolhido = i
        elif algoritmo == "worst_fit":
            maior_sobra = -1
            for i, bloco in enumerate(self.memoria):
                if bloco.livre and bloco.tamanho >= tamanho_alocar:
                    sobra = bloco.tamanho - tamanho_alocar
                    if sobra > maior_sobra:
                        maior_sobra = sobra
                        bloco_escolhido = bloco
                        indice_escolhido = i
        elif algoritmo == "buddy_system":
            # Procura o menor bloco livre que seja >= tamanho_alocar (similar ao best_fit)
            menor_sobra = float('inf')
            for i, bloco in enumerate(self.memoria):
                if bloco.livre and bloco.tamanho >= tamanho_alocar:
                    sobra = bloco.tamanho - tamanho_alocar
                    if sobra < menor_sobra:
                        menor_sobra = sobra
                        bloco_escolhido = bloco
                        indice_escolhido = i
            
            # Se encontrou, faz o "splitting" recursivo (divide em buddies)
            if bloco_escolhido:
                while bloco_escolhido.tamanho > tamanho_alocar:
                    nova_metade_tamanho = bloco_escolhido.tamanho // 2
                    # O bloco atual torna-se a primeira metade
                    bloco_escolhido.tamanho = nova_metade_tamanho
                    # Cria o "buddy" (segunda metade) como bloco livre
                    buddy = BlocoMemoria(bloco_escolhido.inicio + nova_metade_tamanho, nova_metade_tamanho)
                    self.memoria.insert(indice_escolhido + 1, buddy)
                    # O loop continua dividindo a primeira metade até atingir o tamanho desejado

        if not bloco_escolhido:
            self.metricas['alocacoes_falha'] += 1
            return None

        # Realizar a alocação final (preencher o bloco com os dados do tenant)
        alloc_id = self.metricas['alocacoes_sucesso'] + 1
        bloco_ocupado = BlocoMemoria(bloco_escolhido.inicio, tamanho_alocar, tenant_id, alloc_id)
        
        # Registrar Fragmentação Interna
        self.metricas['fragmentacao_interna_total'] += frag_interna_ciclo
        
        # Remover o bloco livre antigo da lista e colocar o bloco alocado no lugar
        # Como o Buddy System modificou o tamanho do bloco_escolhido durante o while, 
        # o tamanho aqui é exato. Se houver sobra real (outros algoritmos), splitamos abaixo.
        sobra = bloco_escolhido.tamanho - tamanho_alocar
        if sobra > 0:
            bloco_livre_restante = BlocoMemoria(bloco_escolhido.inicio + tamanho_alocar, sobra)
            self.memoria.insert(indice_escolhido, bloco_livre_restante)
            self.memoria.insert(indice_escolhido, bloco_ocupado)
            del self.memoria[indice_escolhido + 2]
        else:
            self.memoria.insert(indice_escolhido, bloco_ocupado)
            del self.memoria[indice_escolhido + 1]

        self.metricas['alocacoes_sucesso'] += 1
        self.metricas['tempo_total_alocacao'] += time.perf_counter() - inicio_tempo
        return alloc_id

    def desalocar(self, alloc_id):
        for i, bloco in enumerate(self.memoria):
            if bloco.alloc_id == alloc_id:
                bloco.tenant_id = None
                bloco.alloc_id = None
                self._coalescer(i)
                return True
        return False

    def _coalescer(self, indice):
        if self.algoritmo_atual == "buddy_system":
            # Lógica específica do Buddy System: só junta com o vizinho se ambos tiverem 
            # o mesmo tamanho, formarem um bloco cujo tamanho é potência de 2, e o endereço 
            # de início do bloco da esquerda for múltiplo do tamanho combinado.
            bloco_atual = self.memoria[indice]
            
            # 1. Tenta juntar com o bloco DA FRENTE
            if indice + 1 < len(self.memoria):
                prox = self.memoria[indice + 1]
                if prox.livre and bloco_atual.tamanho == prox.tamanho and (bloco_atual.inicio % (bloco_atual.tamanho * 2)) == 0:
                    bloco_atual.tamanho += prox.tamanho
                    del self.memoria[indice + 1]
                    self._coalescer(indice) # Tenta juntar recursivamente
                    return
                    
            # 2. Tenta juntar com o bloco DE TRÁS
            if indice > 0:
                ant = self.memoria[indice - 1]
                if ant.livre and bloco_atual.tamanho == ant.tamanho and (ant.inicio % (ant.tamanho * 2)) == 0:
                    ant.tamanho += bloco_atual.tamanho
                    del self.memoria[indice]
                    self._coalescer(indice - 1) # Tenta juntar recursivamente
                    return
        else:
            # Lógica genérica para First, Best e Worst Fit (junta qualquer bloco adjacente livre)
            if indice + 1 < len(self.memoria) and self.memoria[indice + 1].livre:
                self.memoria[indice].tamanho += self.memoria[indice + 1].tamanho
                del self.memoria[indice + 1]
            if indice > 0 and self.memoria[indice - 1].livre:
                self.memoria[indice - 1].tamanho += self.memoria[indice].tamanho
                del self.memoria[indice]

    def calcular_fragmentacao_externa(self):
        memoria_livre_total = sum(b.tamanho for b in self.memoria if b.livre)
        if memoria_livre_total == 0:
            return 0.0
        maior_bloco_livre = max((b.tamanho for b in self.memoria if b.livre), default=0)
        frag = 1.0 - (maior_bloco_livre / memoria_livre_total)
        return frag * 100.0

    def registrar_ciclo(self):
        self.metricas['fragmentacao_externa_media'] += self.calcular_fragmentacao_externa()
        self.metricas['ciclos'] += 1

    def obter_metricas_finais(self):
        ciclos = self.metricas['ciclos']
        total_req = self.metricas['alocacoes_sucesso'] + self.metricas['alocacoes_falha']
        taxa_falha = (self.metricas['alocacoes_falha'] / total_req) * 100 if total_req > 0 else 0
        
        memoria_alocada_total = sum(b.tamanho for b in self.memoria if not b.livre)
        perc_frag_interna = (self.metricas['fragmentacao_interna_total'] / memoria_alocada_total) * 100 if memoria_alocada_total > 0 else 0

        return {
            'Alocações com Sucesso': self.metricas['alocacoes_sucesso'],
            'Alocações Falhadas': self.metricas['alocacoes_falha'],
            'Taxa de Rejeição': f"{taxa_falha:.2f}%",
            'Fragmentação Externa Média': f"{(self.metricas['fragmentacao_externa_media'] / ciclos):.2f}%" if ciclos > 0 else "0%",
            'Fragmentação Interna Total (MB)': f"{self.metricas['fragmentacao_interna_total']} MB",
            'Fragmentação Interna (%)': f"{perc_frag_interna:.2f}%",
            'Tempo Médio de Alocação': f"{(self.metricas['tempo_total_alocacao'] / self.metricas['alocacoes_sucesso']) * 1000:.4f} ms" if self.metricas['alocacoes_sucesso'] > 0 else "0 ms"
        }

def simular_cenario(algoritmo):
    print(f"\n{'='*70}")
    print(f"INICIANDO SIMULAÇÃO - Algoritmo: {algoritmo.upper()} | Página: 32MB")
    print(f"{'='*70}")
    
    servidor = CloudServer(tamanho_total_mb=1024, tamanho_pagina_mb=32)
    alocacoes_ativas = {} 

    tenants = ["EmpresaA", "EmpresaB", "StartupC", "CorpD"]
    
    for i in range(50):
        tenant = random.choice(tenants)
        if random.random() < 0.70 or not alocacoes_ativas:
            tamanho_req = random.choice([50, 100, 128, 150, 200, 256, 300])
            alloc_id = servidor.alocar(tenant, tamanho_req, algoritmo)
            if alloc_id:
                alocacoes_ativas[alloc_id] = tenant
        else:
            alloc_id_remover = random.choice(list(alocacoes_ativas.keys()))
            servidor.desalocar(alloc_id_remover)
            del alocacoes_ativas[alloc_id_remover]
            
        servidor.registrar_ciclo()

    print("\n--- MÉTRICAS COLETADAS ---")
    metricas = servidor.obter_metricas_finais()
    for chave, valor in metricas.items():
        print(f"{chave}: {valor}")
    
    return metricas

if __name__ == "__main__":
    random.seed(42) 

    resultados = {}
    for alg in ["first_fit", "best_fit", "worst_fit", "buddy_system"]:
        random.seed(42) # Garante a mesma carga de trabalho
        resultados[alg] = simular_cenario(alg)

    print("\n" + "="*100)
    print("RESUMO COMPARATIVO (Cenário de Nuvem com Paginação de 32MB)")
    print("="*100)
    header = f"{'Algoritmo':<13} | {'Frag Externa Média':<18} | {'Frag Interna Total':<18} | {'Taxa Rejeição':<15} | {'Tempo Médio Aloc.'}"
    print(header)
    print("-" * 100)
    for alg, met in resultados.items():
        print(f"{alg.upper():<13} | {met['Fragmentação Externa Média']:<18} | {met['Fragmentação Interna Total (MB)']:<18} | {met['Taxa de Rejeição']:<15} | {met['Tempo Médio de Alocação']}")

    # Chama a função que agora está morando no outro arquivo!
    salvar_dados_e_gerar_graficos(resultados)