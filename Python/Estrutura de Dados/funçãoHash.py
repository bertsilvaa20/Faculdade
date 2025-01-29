strings = ["apple", "voadora", "banjo", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", "kiwi", "xuru", "runin", "xamã", "mirtilho", "lemon", "mango", "nectarine", "orange", "papaya", "quince", "raspberry", "strawberry", "tangerine", "ugli", "voavanga", "maravilha", "IFCE", "maracanaú", "ceará", "manga", "rendemption", "bobo", "maluco"]

TABLE_SIZE = 32

def hash_summation(string):
    return sum(ord(c) for c in string)

def hash_polynomial(string, p=31):
    return sum(ord(c) * (p ** i) for i, c in enumerate(string))

def hash_xor_shift(string):
    h = 0
    for c in string:
        h ^= ord(c) << 1
    return h


def compression_division(hash_value):
    return hash_value % TABLE_SIZE

def compression_fold(hash_value):
    str_hash = str(hash_value)
    parts = [int(str_hash[i:i+2]) for i in range(0, len(str_hash), 2)]
    return sum(parts) % TABLE_SIZE

def compression_mad(hash_value, a=3, b=7, p=37):
    return ((a * hash_value + b) % p) % TABLE_SIZE


def test_hashing(hash_function, compression_function):
    table = [None] * TABLE_SIZE
    collisions = 0
    
    for string in strings:
        hash_value = hash_function(string)
        index = compression_function(hash_value)
        if table[index] is None:
            table[index] = string
        else:
            collisions += 1
    
    return table, collisions


methods = [
    (hash_summation, compression_division, "Somatório + Divisão"),
    (hash_summation, compression_fold, "Somatório + Dobra"),
    (hash_summation, compression_mad, "Somatório + MAD"),
    (hash_polynomial, compression_division, "Polinomial + Divisão"),
    (hash_polynomial, compression_fold, "Polinomial + Dobra"),
    (hash_polynomial, compression_mad, "Polinomial + MAD"),
    (hash_xor_shift, compression_division, "XOR + Divisão"),
    (hash_xor_shift, compression_fold, "XOR + Dobra"),
    (hash_xor_shift, compression_mad, "XOR + MAD"),
]

results = []
for hash_func, comp_func, name in methods:
    _, collisions = test_hashing(hash_func, comp_func)
    results.append((name, collisions))


results.sort(key=lambda x: x[1])


for name, col in results:
    print(f"{name}: {col} colisões")