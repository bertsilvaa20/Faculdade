
public class Medico extends Pessoa {
	
	String crm;
	double salario;
	String especializacao;
	
	public Medico(String nome, String endereco, int idade, String cpf, char sexo, String crm, double salario, String especializacao) {
		super(nome, endereco, idade, cpf, sexo);
		this.crm = crm;
		this.salario = salario;
		this.especializacao = especializacao;
		
	}
	
	public void darPlantao() {
		
		System.out.println(nome + " realizou um plantão.");
		
	}
	
	@Override
	public void imprimirValores() {
		System.out.println("Crm: " + crm);
		System.out.println("Salário: " + salario);
		System.out.println("Especialização: " + especializacao);
		
	}

}
