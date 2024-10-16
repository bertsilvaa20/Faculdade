def soma_quadrados_pares(n):
    # Calcula a soma dos quadrados dos números pares menores que n
    return sum(i ** 2 for i in range(n) if i % 2 == 0)

# Chamada da função
print(soma_quadrados_pares(10))