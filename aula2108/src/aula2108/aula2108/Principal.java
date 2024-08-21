package aula2108;

import java.util.ArrayList;
import java.util.Scanner;

public class Principal {
	
	private ArrayList<Produto> produtos = new ArrayList<>();
	private ArrayList<Livro> livros = new ArrayList<>();
	
	public static void main(String[] args) {
		
		Principal principal = new Principal();
		principal.menu();
		
	
	}
	
	public void menu() {
		
		Scanner scanner = new Scanner(System.in);
		int opcao;
		
		do {
			
		System.out.println("\Escolha uma das opções a seguir: ");
		System.out.println("1. Cadastrar livro");
		System.out.println("2. ");
		
	} while(opcao != 6);
	
}
}
