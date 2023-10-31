package java03lista;

public class Funcao05{
    
    static boolean nao(boolean p){
        return !p;
    }
    
    
    public static void main(String[] args){
        boolean var;
        
        var = true;                             // 3. onde o método 'nao' é invocado.
        System.out.println( var);             //
        System.out.println( nao(var) );        //
        System.out.println( nao(nao(var)));  //
    }
    
}

// 1. O objetivo do código é definir uma classe chamada Funcao05 que contém um método estático chamado nao. O método nao aceita um argumento booleano p e retorna a negação lógica desse valor (!p). 
// Em seguida, no método main, a classe testa a função nao usando diferentes valores booleanos e imprime os resultados no console.

// 2.1. Os modificadores identificados no código são: Nenhum modificador de acesso é especificado na classe Funcao05, o que implica em acesso de pacote (padrão). Logo só temos static no método 'nao', indicando que o método pertence à classe e não a instâncias da classe.

// 2.2. O método nao possui um tipo de retorno boolean, o que significa que ele retorna um valor lógico booleano (true ou false).

// 2.3. O método nao é um método de classe (ou método estático), pois é precedido pelo modificador static. Ele não retorna valores, mas realiza uma operação lógica de negação.

// 3. Aqui, a variável booleana var é definida com o valor true. Em seguida, o método nao é chamado duas vezes com diferentes valores booleanos (var e nao(var)) e os resultados são impressos no console. A primeira chamada imprime o valor original (true), a segunda chamada imprime a negação lógica do valor original (false), e a terceira chamada imprime a negação da negação lógica do valor original (true). 
// O método nao é chamado diretamente a partir da classe Funcao05, já que é um método estático.