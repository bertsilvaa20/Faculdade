from collections import defaultdict
import re

# Função para processar o texto (tokenização e normalização) 
# onde o documento é dividido em termos individuais e convertidos em minúsculas e sem pontuação

def preprocess(text):
    text = text.lower()  # Converte para minúsculas
    text = re.sub(r'[^a-z0-9\s]', '', text)  # Remove pontuação
    return text.split()  # Divide em palavras

# Função para construir o índice invertido
def build_inverted_index(documents):
    inverted_index = defaultdict(list)  # Usa lista para armazenar IDs dos documentos
    for doc_id, text in enumerate(documents, start=1):  # Começa IDs em 1
        words = preprocess(text)
        for word in words:
            if doc_id not in inverted_index[word]:
                inverted_index[word].append(doc_id)  # Evita duplicação de IDs
    return inverted_index

# Exemplo de documentos
documents = [
    "Database indexing improves performance.",
    "Inverted indexes are crucial for search engines.",
    "Performance tuning is essential for databases."
]

# Construção do índice invertido
inverted_index = build_inverted_index(documents)

# Exibir o índice invertido
for term, doc_ids in sorted(inverted_index.items()):
    print(f"{term}: {doc_ids}")