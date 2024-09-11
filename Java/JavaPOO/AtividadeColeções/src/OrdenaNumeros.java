import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class OrdenaNumeros {
	
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();
        String input;

        // Ler números até encontrar "fim"
        while (!(input = scanner.nextLine()).equalsIgnoreCase("fim")) {
            try {
                numeros.add(Integer.parseInt(input));
            } catch (NumberFormatException e) {
                System.out.println("Entrada inválida. Digite números inteiros ou 'fim' para terminar.");
            }
        }

        // Ordenar e imprimir os números
        Collections.sort(numeros);
        for (int numero : numeros) {
            System.out.println(numero);
        }

        scanner.close();
    }
}
