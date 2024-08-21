import java.util.ArrayList;
import java.util.Scanner;

public class Principal{
	
	private ArrayList<Produto> produtos = new ArrayList<>();
	
	public static void main(String[] args) {
		
		Principal principal = new Principal();
		principal.menu();
		
	
	}
	
	public void menu() {
		
		Scanner scanner = new Scanner(System.in);
		int opcao;
		
		do {
			
	    System.out.println("\nEscolha uma opção:");
		System.out.println("1. Cadastrar livro");
		System.out.println("2. Listar produtos");
		System.out.println("3. Cadastrar livros");
		System.out.println("4. Listar livros");
		System.out.println("5. Imprimir tudo");
		System.out.println("6. Sair");
		opcao = scanner.nextInt();
		scanner.nextLine();
		
		switch (opcao) {
		case 1:
			cadastrarProduto(scanner);
		break;
		
		case 2:
			listarProdutos();
			break;
			
		case 3:
			cadastrarLivro(scanner);
		    break;
		    
		case 4:
			listarLivros();
			break;
			
		case 5:
			imprimirTudo();
			break;
			
		case 6:
			System.out.println("Saindo...");
			break;
			default:
				System.out.println("Opção inválida. Tente novamente.");
		}
		
	} while(opcao != 6);
		
		scanner.close();
	
}
	
	public void cadastrarProduto(Scanner scanner) {
		System.out.println("Digite o nome do produto: ");
		String nome = scanner.nextLine();
		
		System.out.println("Informe a descrição do produto: ");
		String descricao = scanner.nextLine();
		
		System.out.println("Digite o preço do produto: ");
		Double preco = scanner.nextDouble();

		scanner.nextLine();
		
		Produto produto = new Produto(nome, descricao, preco);
		produtos.add(produto);
		
		System.out.println("Produto cadastrado com sucesso!");
		
	}
	
	private void listarProdutos() {
		System.out.println("\nLista de produtos:");
		for (Produto produto: produtos) {
			if(!(produto instanceof Livro)) {
				System.out.println(produto.toString());
			}
		}
	}
	
	private void cadastrarLivro(Scanner scanner) {
		System.out.println("Digite o nome do livro: ");
		String nome = scanner.nextLine();
		System.out.println("Digite a descrição do livro: ");
		String descricao = scanner.nextLine();
		System.out.println("Digite o preço do livro: ");
		Double preco = scanner.nextDouble();
		scanner.nextLine();
		System.out.println("Digite os autores do livro: ");
		String autores = scanner.nextLine();
		System.out.println("Digite o ISBN do livro: ");
		String ISBN = scanner.nextLine();
		System.out.println("Digite a editora do livro: ");
		String editora = scanner.nextLine();
		
		Livro livro = new Livro(nome, descricao, preco, autores, ISBN, editora);
		produtos.add(livro);
		
		System.out.println("Livro cadastrado com sucesso!");
		
	}
	
	private void listarLivros() {
		System.out.println("\nLista de livros: ");
		for (Produto produto : produtos) {
			if(produto instanceof Livro) {
				System.out.println(produto.toString());
				
			}
		}
	}
	
	private void imprimirTudo() {
		System.out.println("\nImprimindo todos os produtos e livros: ");
		for (Produto produto: produtos) {
			System.out.println(produto.toString());
		}
	}
}
