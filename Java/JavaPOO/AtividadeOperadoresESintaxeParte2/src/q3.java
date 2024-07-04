import java.util.Scanner;

public class q3 {
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Digite um valor para x: ");
		int x = scanner.nextInt();
	
		int y;
		
		if (x % 2 == 0) {
			y = x / 2;
			System.out.print(y);
		} else {
			y = 3 * x + 1;
			System.out.print(y);
		}
	}

}
