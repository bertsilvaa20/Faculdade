import java.util.Date;
import java.text.SimpleDateFormat;
import java.text.ParseException;

public class Funcionario {
	
	private String nome;
	private Date dataAdmissao;
	private double salario;
	private int identificador;
	private static int proximoIdentificador = 1;
	private boolean emFerias;
	
	public Funcionario(String nome, Date dataAdmissao, double salario) {
		this.nome = nome;
		this.dataAdmissao = dataAdmissao;
		this.salario = salario;
		this.emFerias = false;
	}
	
	public Funcionario() {
		this.identificador = proximoIdentificador++;
	}
	
	
	public String getNome() {
		
		return nome;
		
	}
	
	public void setNome(String nome) {
		
		this.nome = nome;
		
	}
	
	public Date getdataAdmissao() {
		
		return dataAdmissao;
	}
	
	public void setDataAdmissao(Date dataAdmissao) {
		if (dataAdmissao.after(new Date())) {
			System.out.println("Não se pode mais adicionar datas.");
		
		} else {
		
		this.dataAdmissao = dataAdmissao;
		
		}
	}
	
	public double getSalario() {
		return this.salario;
	}
	
	public void setSalario(double salario) {
		if (salario < 1100.00){
			System.out.println("Salário não pode ser inferior a R$ 1.100,00.");
		} else {
		
		this.salario = salario;
	}
}
	
	public int getIdentificador() {
		return identificador;
	}
	
	public boolean isEmFerias() {
		return emFerias;
	}
	
	public void tirarFerias() {
		tirarFerias(30);
	}
	
	public void tirarFerias(int dias) {
		if(!emFerias) {
			emFerias = true;
			System.out.println("O funcionário " + nome + " irá tirar " + dias + " dias de férias.");
		} else {
			System.out.println("O funcionário já está de férias.");
		}
		
	}
	
}

