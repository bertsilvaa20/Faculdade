import java.util.Scanner;
import java.util.HashSet;

public class VerificaStrings {
	
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        HashSet<String> stringsLidas = new HashSet<>();
        String input;

        // Ler strings até encontrar "fim"
        while (!(input = scanner.nextLine()).equalsIgnoreCase("fim")) {
            stringsLidas.add(input);
        }

        // Ler novamente e verificar se a string já foi lida
        while (!(input = scanner.nextLine()).equalsIgnoreCase("fim")) {
            if (stringsLidas.contains(input)) {
                System.out.println(input + " localizado");
            } else {
                System.out.println(input + " nao localizado");
            }
        }

        scanner.close();
    }
}

