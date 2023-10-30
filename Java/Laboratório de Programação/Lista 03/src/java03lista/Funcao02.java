package java03lista;

import java.util.Scanner;

public class Funcao02{
    
    public static void main(String [] args){
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite o primeiro número: ");
        int numero1 = scanner.nextInt();
        
        System.out.print("Digite o segundo número: ");
        int numero2 = scanner.nextInt();
        
        double resposta;
        
        resposta = calcular(numero1 , numero2);
        
        System.out.println(resposta);
    }
    
    public static double calcular(double a, double b){
        double x;
        
        x = a*a + 2*a*b + b*b;
        
        return x;
    }
}