def soma_quadrados(n):
    # Calcula a soma dos quadrados dos números menores que n
    return sum(i ** 2 for i in range(n))

# Chamada da função
print(soma_quadrados(6))