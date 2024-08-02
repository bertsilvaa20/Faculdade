/* No exemplo abaixo, o valor de numero não é alterado 
 * pelo método 'alterarNumero' porque 'n' é uma cópia de 'numero'.*/

// QUESTÃO 3


public class ex1 {
	
	public static void main(String[] args) {
        int numero = 5;
        alterarNumero(numero);
        System.out.println("Valor de numero após chamada ao método: " + numero); // Saída: 5
    }

    public static void alterarNumero(int n) {
        n = 10;
    }
}
