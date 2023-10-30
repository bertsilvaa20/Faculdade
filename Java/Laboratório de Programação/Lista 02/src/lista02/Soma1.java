import java.util.Scanner;

public class Soma1{
    
    public static void main (String[] args){
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite o primeiro número: ");
        int numero1 = scanner.nextInt();
        
        System.out.print("Digite o segundo número: ");
        int numero2 = scanner.nextInt();
        
        int resultado = numero1 + numero2;
        
        System.out.println("a soma de " + numero1 + " com " + numero2 + " equivale a: " +resultado);
    }
}