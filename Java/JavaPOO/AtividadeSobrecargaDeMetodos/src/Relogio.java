public class Relogio {
	
	private int hora;
	private int minuto;
	private int segundo;
	
	public void inicializar(int hora, int minuto, int segundo){
		this.hora = hora;
		this.minuto = minuto;
		this.segundo = segundo;
	}
	
	public void inicializar(int hora, int minuto) {
		this.hora = hora;
		this.minuto = minuto;
		this.segundo = 1;
	}
	
	public void inicializar(int hora) {
		this.hora = hora;
		this.minuto = 1;
		this.segundo = 1;
	}
	
	public void exibirHorario() {
		System.out.println("Horário atual: " + hora + "h " + minuto + "min " + segundo + "s");
	}
	

}
