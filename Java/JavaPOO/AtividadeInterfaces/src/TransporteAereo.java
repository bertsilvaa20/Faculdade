
public abstract class TransporteAereo extends Transporte {
	
	public int altitudeActual = 0;
	
	public TransporteAereo(String nome, int altitudeActual) {
		super(nome);
		this.altitudeActual = altitudeActual;
	}

	public TransporteAereo(String nome) {
		super(nome);
	}

	public void subir(int metros) {
		
		System.out.println("Subindo " + metros + " metros de altura!");
		altitudeActual++;
	}
	
	public void descer(int metros) {
		
		System.out.println("Descendo " + metros + " metros de altura!");
		altitudeActual--;
		
	}
	
	void info() {
		System.out.println("Nome: " + nome);
		System.out.println("Altura atual: " + altitudeActual);
	}


}
