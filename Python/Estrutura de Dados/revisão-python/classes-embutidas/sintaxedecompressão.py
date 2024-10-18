# Sintaxe de Compressão

quadrados = [k*k for k in range(1,10)]          # maneira de criar uma lista de 1 a 1000 
quadrados_set = {k*k for k in range(1,10)}
quadrados_dict = {k:k*k for k in range (1,10)}   # dicionário (chave primária que seria o k e o valor é k * k)

print(quadrados, quadrados_set, quadrados_dict)