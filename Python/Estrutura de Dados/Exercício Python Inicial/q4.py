def todos_diferentes(seq):
    # Usa um conjunto para rastrear os números já vistos
    vistos = set()
    
    # Itera sobre a sequência
    for num in seq:
        if num in vistos:
            return False
        vistos.add(num)
    
    return True

# Chamada da função
print(todos_diferentes([1, 2, 3, 4]))
print(todos_diferentes([1, 2, 3, 2]))