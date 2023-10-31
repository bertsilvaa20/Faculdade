package java03lista;

public class Funcao06{
    
    static void algumasOperacoes(int a, int b, int c){
        int t;
        
        imprimeValores(a, b, c);
        
        t = a;
        a = b;
        b = c;
        c = t;
        
        imprimeValores(a, b, c);
    }
    
    static void imprimeValores(int a, int b, int c){
        System.out.println("A=" +a+", B=" +b+", C=" +c);
    }
    
    public static void main(String[] args){
        algumasOperacoes(10,20,30);     // 3. onde o método 'algumasOperacoes' é invocado.
    }
}


// 1. O objetivo do código é definir uma classe chamada Funcao06 que contém dois métodos estáticos: 'algumasOperacoes' e 'imprimeValores'. 
// O método 'algumasOperacoes' recebe três números inteiros (a, b, c), realiza algumas operações de troca de valores entre as variáveis e, em seguida, chama o método 'imprimeValores' para imprimir os valores das variáveis antes e depois das operações.

// 2.1. Os modificadores identificados no código são: Nenhum modificador de acesso é especificado na classe Funcao06, o que implica em acesso de pacote (padrão). Logo só temos apenas static nos métodos 'algumasOperacoes' e 'imprimeValores', indicando que os métodos pertencem à classe e não a instâncias da classe.

// 2.2. Ambos os métodos 'algumasOperacoes' e 'imprimeValores' não possuem um tipo de retorno explícito, ou seja, seus tipos de retorno são 'void', o que significa que eles não retornam um valor específico.

// 2.3. Os métodos algumasOperacoes e imprimeValores são métodos de classe (ou métodos estáticos), pois ambos são precedidos pelo modificador 'static'. 
// Eles não retornam valores, mas realizam operações de impressão e troca de valores.

// 3. O método algumasOperacoes é chamado com os valores 10, 20 e 30. Dentro de 'algumasOperacoes', os valores são impressos chamando o método 'imprimeValores'. Em seguida, ocorre a troca dos valores das variáveis a, b e c, e os valores trocados são impressos novamente usando o método 'imprimeValores'. 
// Ambos os métodos 'algumasOperacoes' e 'imprimeValores' são chamados diretamente a partir da classe 'Funcao06', já que são métodos estáticos.