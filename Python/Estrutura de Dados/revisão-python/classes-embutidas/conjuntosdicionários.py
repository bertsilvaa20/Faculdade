# conjuntos e dicionários              (nesse caso utilizamos as chaves {})

moedas = {'Brasil':'Real', 'EUA': 'Dolar', 'França': 'Euro', 'Japao': 'Yen'}
primes = {2,3,5,7,13}
pares = {2,4,6,8,10,12}
pares2 = {6,8,12}

c = 'França' in moedas
d = 'Alemanha' in moedas
e = 'Alemanha' not in moedas
f = primes == pares
g = primes <= pares
h = pares2 < pares                           # retorna true pois pares2 é um subconjunto de pares (ele está contido em pares)
a = pares2 > pares                           # retorna false pois pares2 não é o superconjunto (pares1 não está contido nele)
b = pares > pares2                           # retorna true pois pares é o superconjunto (pares2 está contido nele)
i = pares | primes                           # junta as duas listas
j = pares & primes                           # é um 'e' então ele vai retornar os valores presentes em ambas (nesse caso: 2)
k = pares - primes                           # removeu a intersecção, ou seja o valor igual para ambas (nesse caso: 2)
l = pares ^ primes                           # todos os elementos menos a intersecção (nesse caso: 2)

print (c)
print (d)
print (e)
print (f)
print (g)
print (h)
print (a)
print (b)
print (i)
print (j)
print (k)
print (l)
