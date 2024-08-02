/*No exemplo abaixo, a tentativa de alterar a referência 
 * 'o' para apontar para um novo objeto não afeta 'obj' fora do método 'alterarReferencia'.
 */

// QUESTÃO 3


public class ex3 {
	
	public static void main(String[] args) {
        MeuObjeto obj = new MeuObjeto();
        obj.valor = 5;
        alterarReferencia(obj);
        System.out.println("Valor de obj.valor após tentativa de alterar referência: " + obj.valor); // Saída: 5
    }

    public static void alterarReferencia(MeuObjeto o) {
        o = new MeuObjeto(); // Atribuindo uma nova referência
        o.valor = 20;
    }
}

