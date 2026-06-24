# Função para salvar os resultados em CSV e gerar gráficos

import csv
import matplotlib.pyplot as plt

def salvar_dados_e_gerar_graficos(resultados):
    print("\n[!] Gerando arquivo CSV e plotando gráficos...")
    
    # 1. SALVANDO EM CSV
    nome_arquivo = 'resultados_memoria_cloud.csv'
    with open(nome_arquivo, mode='w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        # Escrevendo o cabeçalho
        writer.writerow(['Algoritmo', 'Alocacoes Sucesso', 'Alocacoes Falhas', 'Taxa Rejeicao (%)', 'Frag Externa Media (%)', 'Frag Interna Total (MB)', 'Tempo Medio (ms)'])
        
        for alg, met in resultados.items():
            # Limpando as strings para salvar apenas os números no CSV
            taxa_rej = float(met['Taxa de Rejeição'].replace('%', ''))
            frag_ext = float(met['Fragmentação Externa Média'].replace('%', ''))
            frag_int = float(met['Fragmentação Interna Total (MB)'].replace(' MB', ''))
            tempo_med = float(met['Tempo Médio de Alocação'].replace(' ms', ''))
            
            writer.writerow([alg.upper(), met['Alocações com Sucesso'], met['Alocações Falhadas'], taxa_rej, frag_ext, frag_int, tempo_med])
    
    print(f"[SUCESSO] Dados exportados para o arquivo: {nome_arquivo}")

    # 2. GERANDO OS GRÁFICOS (MATPLOTLIB)
    algoritmos = [alg.upper() for alg in resultados.keys()]
    
    # Extraindo os valores numéricos limpos
    taxas_rejeicao = [float(resultados[alg]['Taxa de Rejeição'].replace('%', '')) for alg in resultados]
    frag_externa = [float(resultados[alg]['Fragmentação Externa Média'].replace('%', '')) for alg in resultados]
    frag_interna = [float(resultados[alg]['Fragmentação Interna Total (MB)'].replace(' MB', '')) for alg in resultados]
    tempo_alocacao = [float(resultados[alg]['Tempo Médio de Alocação'].replace(' ms', '')) for alg in resultados]

    # Criando uma janela com 4 subgráficos (2x2)
    fig, axs = plt.subplots(2, 2, figsize=(14, 10))
    fig.suptitle('Análise de Desempenho: Multi-tenancy Cloud Memory', fontsize=16, fontweight='bold')

    cores = ['#3498db', '#e74c3c', '#2ecc71', '#f39c12']

    # Gráfico 1: Taxa de Rejeição (Falta de Memória)
    axs[0, 0].bar(algoritmos, taxas_rejeicao, color=cores)
    axs[0, 0].set_title('Taxa de Rejeição (Menos é Melhor)')
    axs[0, 0].set_ylabel('Porcentagem (%)')

    # Gráfico 2: Tempo Médio de Alocação
    axs[0, 1].bar(algoritmos, tempo_alocacao, color=cores)
    axs[0, 1].set_title('Tempo Médio de Alocação (Menos é Melhor)')
    axs[0, 1].set_ylabel('Milissegundos (ms)')

    # Gráfico 3: Fragmentação Externa
    axs[1, 0].bar(algoritmos, frag_externa, color=cores)
    axs[1, 0].set_title('Fragmentação Externa Média (Menos é Melhor)')
    axs[1, 0].set_ylabel('Porcentagem (%)')

    # Gráfico 4: Fragmentação Interna
    axs[1, 1].bar(algoritmos, frag_interna, color=cores)
    axs[1, 1].set_title('Fragmentação Interna Total (Menos é Melhor)')
    axs[1, 1].set_ylabel('Megabytes (MB)')

    # Ajusta o layout para não encavalar os textos e mostra na tela
    plt.tight_layout(rect=[0, 0.03, 1, 0.95])
    plt.show()

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

    # Chama a nossa nova função que gera o CSV e os gráficos de uma vez só
    salvar_dados_e_gerar_graficos(resultados)