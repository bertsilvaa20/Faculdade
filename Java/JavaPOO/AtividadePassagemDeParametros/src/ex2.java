/* No exemplo abaixo, o valor de 'obj.valor' é alterado pelo método 'alterarObjeto'
 * porque 'o' é uma referência ao mesmo objeto que 'obj' aponta. */

// QUESTÃO 3


public class ex2 {
	
	public static void main(String[] args) {
        MeuObjeto obj = new MeuObjeto();
        obj.valor = 5;
        alterarObjeto(obj);
        System.out.println("Valor de obj.valor após chamada ao método: " + obj.valor); // Saída: 10
    }

    public static void alterarObjeto(MeuObjeto o) {
        o.valor = 10;
    }

}
