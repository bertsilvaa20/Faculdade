
public class Main {
	
	public static void main(String[] args) {
		
		Hospital hospital = new Hospital("Hospital da Leste", "Av. Leste Oeste, 332");
		
		Paciente paciente = new Paciente("Paula", "Av. das Flores, 390", 26, "123.456.789-10", 'F', "Gripe", "Loratadina");
		
		Medico medico = new Medico("Robert", "Av. Tenente Lisboa, 1328", 34, "109.876.543-21", 'M', "54321", 10000.0, "Otorrinolaringologista");
	
	
	// IMPRIMINDO INFORMAÇÕES
	
	hospital.imprimirValores();
	System.out.println();
	paciente.imprimirValores();
	paciente.sentirDor();
	paciente.andar();
	System.out.println();
	medico.imprimirValores();
	medico.darPlantao();
	medico.andar();

}
	
}
