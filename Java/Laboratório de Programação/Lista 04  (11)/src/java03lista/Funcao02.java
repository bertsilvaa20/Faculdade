package java03lista;

public class Funcao02{
    
    static double calcular(double a, double b){
        double x;
        
        x = a*a + 2*a*b + b*b;
        
        return x;
    }
    
    public static void main(String[] args){
        
        double resposta;
        
        resposta = calcular(2,3);     // 3. onde o método 'calcular' é invocado.
        
        System.out.println(resposta);
    }
}

// 1. O objetivo do código é definir uma classe chamada Funcao02 que contém um método estático chamado 'calcular'. O método calcular aceita dois argumentos do tipo double, a e b, realiza uma operação de cálculo e retorna o resultado como um valor do tipo double. 
// Em seguida, no método main, esse método calcular é chamado com os valores 2 e 3, e o resultado é impresso no console.

// 2.1. Os modificadores identificados no código são: public na classe Funcao02, tornando a classe visível a partir de qualquer lugar e static no método calcular, indicando que o método pertence à classe e não a instâncias da classe.

// 2.2. O método 'calcular' possui um tipo de retorno double, o que significa que ele retorna um valor decimal.

// 2.3. O método 'calcular' é um método de classe (ou método estático), pois é precedido pelo modificador static. Não há função montada por eles, mas o método realiza um cálculo e retorna o resultado.

// 3. Aqui, o método 'calcular' é chamado com os valores 2.0 e 3.0, que são números de ponto flutuante (double). O resultado da chamada do método é armazenado na variável resposta. Portanto, a instância do método calcular ocorre no método main, que é o ponto de entrada do programa. 
// O método calcular não pertence a uma instância específica da classe Funcao02, pois é um método estático. Ele pode ser chamado diretamente a partir da classe, como foi feito no método main.