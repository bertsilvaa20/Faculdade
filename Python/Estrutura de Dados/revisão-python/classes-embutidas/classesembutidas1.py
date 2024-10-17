# classes embutidas (bool, int, float, list, tuple, str, set, frozenset, dict)

nome = "Robert"
idade = 20
altura = 1.76
val = False
val2 = True

idade = int('56')
altura = float('1.32')
val = bool(0)                                      # Em python, qualquer número diferente de 0 retorna 'True'
                                                   # convertendo para bool e o 0 retorna 'False'



print (nome, idade, altura, val, sep = ' / ', end ="<>")   # 'sep' é utilizado para separar os dados
                                                           # o 'end' é o que será printado ao final do texto

prime = [2,3,5,7]                                          # aqui foi criada a lista prime
t = (3,4,5)                                                # aqui foi criada uma tupla (seus valores não podem ser alterados)

i = prime[0]                                               # o i acaba se tornando a primeira posição da lista prime (posição 0)
prime[1] = 45                                              # aqui o valor da segunda posição é alterado (posição 1)

print("\n", prime, t, i, nome, sep = ' --> ', end = "<>")

cores = {'red', 'green', 'purple'}
cores2 = {'red', 'yellow', 'green'}

                                                           # não podemos manipular ainda os conjuntos. X i = cores[1]

m = {'Brasil':'real', 'França':'euro', 'Burkina Faso':'yeni'}

m['Brasil'] = 'Dolar'

v = m['Brasil']
print("\n", cores, v)

 

