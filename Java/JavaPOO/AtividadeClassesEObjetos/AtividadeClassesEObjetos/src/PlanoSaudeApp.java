import java.util.ArrayList;
import java.util.Date;
import java.util.List;



public class PlanoSaudeApp {
	
	public static void main(String[] args) {
		
		Pessoa titular = new Pessoa();
		titular.nome = "João Silva";
		titular.endereco = "Rua A, 123";
		titular.dataNascimento = new Date(1985, 4, 12);
		titular.sexo = 'M';
		
		Pessoa dependente1 = new Pessoa();
		dependente1.nome = "Maria Silva";
		dependente1.endereco = "Rua A, 123";
		dependente1.dataNascimento = new Date(2005, 8, 22);
		dependente1.sexo = 'F';
		
		Contrato contrato = new Contrato();
		contrato.titular = titular;
		contrato.dependentes = new ArrayList<>();
		contrato.dependentes.add(dependente1);
		contrato.dataContrato = new Date();
		contrato.dataReajuste = new Date();
		
		Consulta consulta1 = new Consulta();
		consulta1.dataConsulta = new Date();
		consulta1.profissional = new ProfissionalSaude("Dr. José", "Clínico Geral");
		
		contrato.historicoConsultas = new ArrayList<>();
		contrato.historicoConsultas.add(consulta1);
		
		Fatura faturaMensal = new Fatura();
		faturaMensal.dataVencimento = new Date();
		faturaMensal.percentualMulta = 2.0;
		faturaMensal.percentualJurosDia = 0.5;
		
		contrato.faturaMensal = faturaMensal;
		
		System.out.println("Titular: " + contrato.titular.nome);
		System.out.println("Dependentes: ");
		for (Pessoa dependente : contrato.dependentes) {
			System.out.println("- " + dependente.nome);
		}
		
		
		System.out.println("Histórico de Consultas: ");
		for (Consulta consulta: contrato.historicoConsultas) {
			System.out.println("- Data: " +consulta.dataConsulta + ", Profissional: " + consulta.profissional.nome);
		}
		
		System.out.println("Fatura Mensal: ");
		System.out.println("- Vencimento: " +faturaMensal.dataVencimento);
		System.out.println("- Valor Total: " +faturaMensal.valorTotal());
		
	}

}
