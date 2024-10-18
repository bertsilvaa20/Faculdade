# condicionais e loops            (if, elseif(elif), while, for)
# funções simples

i = 2
if i < 10:
    print("menor que 10!")
elif i < 20:
    print("menor que 20!")
else:
    print("é maior que 20!")

print('\n')                                        # pular linha

j = 0
l = ['leao', 'foca', 'urso', 'girafa', 'boto cor de rosa']

while j < len(l) and l[j] != 'urso':                # len equivale a length (tamanho da lista l)
    j += 1                                       

print(j)                                            # vai retornar 2 pois ele vai ciclar a lista até encontrar o nome urso
                                                    # como ele encontra o urso na posição 2, então é isso que será retornado.

print ('\n')                                        # pular linha

j = 0
l = ['leao', 'foca', 'urso', 'girafa', 'boto cor de rosa']

for item in l:                                         # elemento iterable, permite navegar pelos componentes da lista
    print(item)


print('\n')

animais = ['foca', 'leao', 'formiga', 'baleia']
def count(data, target = 'leao'):
    i = 0
    for item in data:
        if item == target:
            break
        i += 1
    return i
    
p = count(animais, 'baleia')           # vai analisar a lista e parar no valor da baleia (3)
print(p)