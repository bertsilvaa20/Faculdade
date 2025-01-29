class Node:  # aqui é onde inicia-se o código de uma pilha baseada em lista encadeada
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

    def setData(self, data):
        self.data = data

    def getData(self):
        return self.data

    def setNext(self, next):
        self.next = next

    def getNext(self):
        return self.next

    def hasNext(self):
        return self.next != None


class Stack():
    def __init__(self, data=None):
        self.head = None
        if data:
            for data in data:
                self.push(data)

    def push(self, data):
        temp = Node()
        temp.data = data
        temp.next = self.head
        self.head = temp

    def pop(self):
        if self.head is None:
            raise IndexError
        temp = self.head.data
        self.head = self.head.next
        return temp

    def peek(self):
        if self.head is None:
            raise IndexError
        return self.head.data

    def isEmpty(self):
        return self.head == None


def verificar_delimitadores(expressao):
    s = Stack()
    
    pares = {')': '(', ']': '[', '}': '{'}
    
    for c in expressao:
        if c in "([{":
            s.push(c)
        
        elif c in ")]}":
            if s.isEmpty():  
                return False
            elif s.pop() != pares[c]:  
                return False
    
    return s.isEmpty()


expressoes = [
    "(A+B)*(A-B)",  
    "(A+B]-A",      
    "((A+B)+(C-D))",  
    "((A+B)+(C-D)",   
]

for expr in expressoes:
    print(f"Expressão: {expr} -> {'OK' if verificar_delimitadores(expr) else 'NOK'}")

def verificar_tags_balanceadas(html):
    tags_validas = ["body", "h1", "center", "p", "ol", "li"]  
    pilha = Stack()  

    i = 0  
    while i < len(html):
        if html[i] == '<':  
            j = html.find('>', i + 1)  
            if j == -1:  
                return "NOK - Tag não fechada"
            
            tag = html[i + 1:j]  
            
            if not tag.startswith('/'):  
                if tag in tags_validas:  
                    pilha.push(tag)  
                else:
                    return f"NOK - Tag inválida: {tag}"  
            else:  
                tag_abertura = tag[1:]  
                if pilha.isEmpty() or pilha.peek() != tag_abertura:  
                    return "NOK - Tag de fechamento não corresponde"
                pilha.pop()  

            i = j  
        i += 1  

    if not pilha.isEmpty():  
        return "NOK - Tag de abertura sem fechamento"
    return "OK - Tags balanceadas"


print(verificar_tags_balanceadas("<h1> Ola </h1>"))  
print(verificar_tags_balanceadas("<body><h1>Mundo</body>"))  
print(verificar_tags_balanceadas("</body><p>Oi</p>"))  
