package java03lista;

import java.math.*;


public class Funcao04{
    
    static void calcular (double a, double b){
        
        System.out.println( Math.floor(a/b));
        System.out.println( Math.ceil(a/b));
        
        System.out.println( Math.min(a,b));
        System.out.println( Math.max(a,b));
        
        System.out.println( Math.pow(a,b));
        
        System.out.println( Math.sqrt(a+b));
        
        System.out.println( Math.abs(-a-b));
    }
    
    public static void main(String[] args){
        
        calcular(2,3);           // 3. onde o método 'calcular' é invocado.
    }
    
}

// 1. O objetivo do código é definir uma classe chamada Funcao04 que contém um método estático chamado 'calcular'. O método calcular aceita dois argumentos do tipo double, a e b, e realiza várias operações matemáticas usando a classe Math da biblioteca padrão de Java. As operações incluem divisão arredondada para baixo, divisão arredondada para cima, mínimo, máximo, potência, raiz quadrada e valor absoluto. 
// O resultado de cada operação é impresso no console.

// 2.1. Os modificadores identificados no código são: public na classe Funcao04, tornando a classe visível a partir de qualquer lugar e static no método 'calcular', indicando que o método pertence à classe e não a instâncias da classe.

// 2.2. O método 'calcular' não possui um tipo de retorno explícito, ou seja, seu tipo de retorno é void, o que significa que ele não retorna um valor específico.

// 2.3. O método 'calcular' é um método de classe (ou método estático), pois é precedido pelo modificador 'static'. Ele não retorna valores, mas executa várias operações de impressão usando a classe 'Math'.

// 3. Aqui, o método 'calcular' é chamado com os valores 2.0 e 3.0, que são números de ponto flutuante (double). O método realiza várias operações matemáticas, como divisão arredondada para baixo (Math.floor), divisão arredondada para cima (Math.ceil), mínimo (Math.min), máximo (Math.max), potência (Math.pow), raiz quadrada (Math.sqrt) e valor absoluto (Math.abs). Os resultados de cada operação são impressos no console. 
// O método calcular não retorna um valor, ele apenas realiza operações de saída. O método é chamado diretamente a partir da classe Funcao04, já que é um método estático.