# listas em python

cores = ['azul', 'verde', 'amarelo', 'vermelho', 'purpura', 'azul marinho', 'ciano']
cores2 = ['azul bebe', 'amarelo manga']
primes = [2,3,5,7,13]
a = 2 * primes                                      # aqui está sendo duplicada a lista dos números primos (repetida duas vezes)
b = 2 * cores2

c = cores[1]                                        # posição 1
d = cores[1:3]                                      # intervalo 1 ao 3  (vai do 1 até o menor que 3)
e = cores [1:5:2]                                   # intervalo 1 ao 5 (vai do 1 até o menor que 5) pulando de 2 em 2
f = cores + cores2                                  # concatenação das duas listas

g = 'amarelo' in cores                              # verificando se amarelo está em cores (true ou false)

print (c)
print (d)
print (e)
print (f)
print (a)
print (g)

del cores[1]                                        # aqui deletamos o valor 1 (verde) da lista 
print (cores)

c = cores < cores2                                 # comparando duas listas (true ou false)
print (c)                                          # comparação alfabética é realizada

