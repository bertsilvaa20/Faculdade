
public abstract class TransporteTerrestre extends Transporte{
	
	public String tipo;
	
	public TransporteTerrestre(String nome, String tipo) {
		super(nome);
		this.tipo = tipo;
	}

	
	public void estacionar() {
		
		System.out.println("Estacionando!!");
		
		
	}
	
	void info() {
		System.out.println("Nome: " + nome);
	}

}
