import random

def aniversario_paradoxo(n):
    # Função que testa o paradoxo do aniversário
    aniversarios = [random.randint(1, 365) for _ in range(n)]
    return len(aniversarios) != len(set(aniversarios))

# Rodar testes para diferentes valores de n
for n in range(5, 105, 5):
    resultado = sum(aniversario_paradoxo(n) for _ in range(100)) / 100
    print(f'{n} pessoas: {resultado*100:.2f}% de chance de duas pessoas compartilharem o mesmo aniversário.')