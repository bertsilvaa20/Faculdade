
public class Pessoa {
	
	protected String nome;
	protected String endereco;
	protected int idade;
	protected String cpf;
	protected char sexo;
	
	public Pessoa(String nome, String endereco, int idade, String cpf, char sexo) {
		this.nome = nome;
		this.endereco = endereco;
		this.idade = idade;
		this.cpf = cpf;
		this.sexo = sexo;
		
	}
	
	
	public void andar() {
		
		System.out.println(nome + " está andando.");
		
	}
	
	public void imprimirValores() {
		
		System.out.println("Nome: " + nome);
		System.out.println("Endereço: " + endereco);
		System.out.println("Idade: " + idade);
		System.out.println("CPF: " + cpf);
		System.out.println("Sexo: " + sexo);
		
		
	}

}
