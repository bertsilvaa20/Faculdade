# For

listaprodutos = ["iphone", "ipad", "notebook"]
listaprecos = [1500, 5000, 5500]
listanumeros = [0,1,2,3,4,5,6,7,8,9,10]

i = 0;

for produto in listaprodutos:        # para cada produto em listaprodutos printe o produto
    print(produto)

for preco in listaprecos:            # para cada preço em listaprecos printe o preço
    print(preco)

for preco in listaprecos:            # para cada preço em listaprecos printe o preço multiplicado por 2 (dobrado)
    print(preco * 2)

for i in range(100):                 # podemos rodar um código quantas vezes quisermos, nesse caso será rodado 100 vezes
    print (i + 1)

for num in listanumeros:             # retornar os números pares de uma determinada sequência numeral (0 a 10)
    if num % 2 == 0:
        print(num)
