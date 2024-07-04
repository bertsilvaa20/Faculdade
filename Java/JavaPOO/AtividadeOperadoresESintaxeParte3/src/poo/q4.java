package poo;
import java.util.Scanner;

public class q4 {
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Digite o valor limite para a sequencia de Fibonnaci: ");
		int limite = scanner.nextInt();
		
		System.out.print("Sequencia de fibonnaci até " + limite + ": ");
		
		int termo1 = 0;
		int termo2 = 1;
		
		while (termo1 <= limite) {
			
			System.out.print(termo1 + " ");
			
			int soma = termo1 + termo2;
			termo1 = termo2;
			termo2 = soma;
		}
		
		scanner.close();
		
	}

}
