
public class Paciente extends Pessoa{
	
	String doenca;
	String medicacao;
	
	public Paciente(String nome, String endereco, int idade, String cpf, char sexo, String doenca, String medicacao) {
		
		super(nome, endereco, idade, cpf, sexo);
		this.doenca = doenca;
		this.medicacao = medicacao;
		
	}


	public void sentirDor() {
		
		System.out.println(nome + " está sentindo dor.");
	}
	
	public void darAlta() {
		
		System.out.println(nome + " recebeu alta.");
		
	}
	
	@Override
	public void imprimirValores() {
		System.out.println("Doença: " + doenca);
		System.out.println("Medicação: " + medicacao);
	}
	

}
