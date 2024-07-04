import java.text.ParseException;
import java.text.SimpleDateFormat;                  // TEM QUE CRIAR OUTRA CLASSE BURRO E NÃO CRIAR 2 CLASSES NO MESMO CÓDIGO

public class Principal {
	
		public static void main (String[] args) {
			
			SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
			
			Funcionario f1 = new Funcionario();
			
			f1.setNome("Bruna");
			try {
				f1.setDataAdmissao(sdf.parse("01/01/2022"));
				
			} catch (ParseException e){
				e.printStackTrace();
				
			}
			
			f1.setSalario(1500.00);
			
			Funcionario f2 = new Funcionario();
			
			f2.setNome("Ricardo");
			try {
				f2.setDataAdmissao(sdf.parse("02/05/2021"));
			} catch (ParseException e) {
				e.printStackTrace();
			}
			
			f2.setSalario(2000.00);
			
			Funcionario f3 = new Funcionario();
			
			f3.setNome("Jorge");
			try {
				f3.setDataAdmissao(sdf.parse("12/07/2023"));
			} catch (ParseException e ) {
				e.printStackTrace();
			}
			
			f3.setSalario(1800.00);
			
			
			System.out.println("Informações do Funcionario 1:");
			System.out.println("Identificador: " + f1.getIdentificador());
			System.out.println("Nome: " + f1.getNome());
			System.out.println("Data de admissão: " + f1.getdataAdmissao());
			System.out.println("Salário: " + f1.getSalario());
			
			System.out.println("Informações do Funcionario 2: ");
			System.out.println("Identificador: " + f2.getIdentificador());
			System.out.println("Nome: " + f2.getNome());
			System.out.println("Data de admissão: " + f2.getdataAdmissao());
			System.out.println("Salário: " + f2.getSalario());
			
			System.out.println("Informações do Funcionario 3: ");
			System.out.println("Identificador: " + f3.getIdentificador());
			System.out.println("Nome: " + f3.getNome());
			System.out.println("Data de admissão: " + f3.getdataAdmissao());
			System.out.println("Salário: " + f3.getSalario());
			
			
			
		}
		
	}
