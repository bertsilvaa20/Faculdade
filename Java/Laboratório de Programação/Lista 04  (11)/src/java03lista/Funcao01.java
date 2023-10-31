package java03lista;

public class Funcao01{
    
    static int  caixaPreta(int a, int b){
        
        return a*a + b;
    }
    
    public static void main(String[] args){
        
        int resposta;
        
        resposta = caixaPreta(3,5);       // 3. onde o método caixaPreta é invocado.
        
        System.out.println(resposta);
    }
}

// 1. O objetivo do código é definir uma classe chamada Funcao01 que contém um método estático chamado caixaPreta. 
// O método caixaPreta aceita dois argumentos inteiros, a e b, realiza uma operação matemática simples e retorna o resultado. Em seguida, no método main, esse método caixaPreta é chamado com os valores 3 e 5, e o resultado é impresso no console.

// 2.1. Os modificadores identificados no código são: public na classe Funcao01, tornando a classe visível a partir de qualquer lugar.
// static no método caixaPreta, indicando que o método pertence à classe e não a instâncias da classe.

// 2.2. O método caixaPreta possui um tipo de retorno int, o que significa que ele retorna um valor inteiro.

// 2.3. O método caixaPreta é um método de classe (ou método estático), 
// pois é precedido pelo modificador static. Não há função montada por eles, mas o método realiza uma operação simples de cálculo e retorna o resultado.

// 3. Aqui, o método caixaPreta é chamado com os valores 3 e 5. O resultado da chamada do método é armazenado na variável resposta. Portanto, a instância do método caixaPreta ocorre no método main, que é o ponto de entrada do programa. O método caixaPreta não pertence a uma instância específica da classe Funcao01, pois é um método estático. 
// Ele pode ser chamado diretamente a partir da classe, como foi feito no método main.