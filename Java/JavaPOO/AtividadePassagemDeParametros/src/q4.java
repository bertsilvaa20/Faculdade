
public class q4 {
	
	public static void main(String[] args) {
        int soma1 = somar(1, 2, 3, 4, 5);
        System.out.println("Soma1: " + soma1); // Saída: Soma1: 15

        int soma2 = somar(10, 20);
        System.out.println("Soma2: " + soma2); // Saída: Soma2: 30

        int soma3 = somar();
        System.out.println("Soma3: " + soma3); // Saída: Soma3: 0
    }

    // Método que aceita um número variável de argumentos do tipo int
    public static int somar(int... numeros) {
        int soma = 0;
        for (int num : numeros) {
            soma += num;
        }
        return soma;
    }

}
