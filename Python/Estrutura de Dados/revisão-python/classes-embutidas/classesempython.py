# classes em python           construtores/getters/setters

class Aluno:

    def __init__(self,nome,idade):                   # construtor como é feito no java
        self._nome = nome
        self._idade = idade
        self._notas = []                             # espaço em vazio (conjunto vazio)

    def get_nome(self):
        return self._nome
    
    def set_nome(self, nome):
        self._nome = nome

    def get_idade(self):
        return self._idade
    
    def set_idade(self, idade):
        self._idade = idade

aluno1 = Aluno("Django", 22)
print(aluno1.get_nome() ,aluno1.get_idade())
aluno1.set_nome("Robert")                                      # alterando o nome e idade do aluno
aluno1.set_idade(20)
print(aluno1.get_nome(), aluno1.get_idade())
