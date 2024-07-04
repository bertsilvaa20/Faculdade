package poo;

public class q3 {
	
		static long calcularFatorial(int numero){
			if (numero <= 1) {
				return 1;
			} else {
				return numero * calcularFatorial(numero - 1);
			}
		}
		
		public static void main(String[] args) {
			
			System.out.println("Fatoriais de 1 a 10: ");
		
		for (int i = 1; i <= 10; i++) {
			long fatorial = calcularFatorial(i);
			System.out.println("Fatorial de " + i + ": " + fatorial);
			
		}
	}

}
