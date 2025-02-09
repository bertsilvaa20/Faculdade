import re  # Para usar expressões regulares

def criar_indice_invertido(documentos):
    
    indice_invertido = {}

    for doc_id, texto in documentos.items():
        # 1. Pré-processamento do texto (remover pontuação, minúsculas, etc.)
        texto = re.sub(r'[^\w\s]', '', texto).lower()  # Remove pontuação
        termos = texto.split()  # Divide em palavras

        # 2. Atualização do índice invertido
        for termo in termos:
            if termo not in indice_invertido:
                indice_invertido[termo] = []
            if doc_id not in indice_invertido[termo]:  # Evitar duplicatas
                indice_invertido[termo].append(doc_id)

    return indice_invertido

# Exemplo de uso:
documentos = {
    "doc1": "O gato preto correu rapidamente.",
    "doc2": "Um gato branco dormia tranquilamente.",
    "doc3": "Gatos pretos e brancos são comuns."
}

indice = criar_indice_invertido(documentos)

# Imprime o índice invertido
print(indice)

# Exemplo de busca:
def buscar_documentos(indice_invertido, termo_busca):

    termo_busca = termo_busca.lower()  # Converter para minúsculas
    if termo_busca in indice_invertido:
        return indice_invertido[termo_busca]
    else:
        return []

# Exemplo de busca
resultados = buscar_documentos(indice, "gato")
print(f"\nDocumentos que contêm 'gato': {resultados}")  # Saída: ['doc1', 'doc2']

resultados = buscar_documentos(indice, "preto")
print(f"Documentos que contêm 'preto': {resultados}")  # Saída: ['doc1', 'doc3']

resultados = buscar_documentos(indice, "cachorro")
print(f"Documentos que contêm 'cachorro': {resultados}") # Saída: []