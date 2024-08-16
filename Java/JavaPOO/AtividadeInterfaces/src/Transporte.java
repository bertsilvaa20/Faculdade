
public abstract class Transporte {
	
	public String nome;
	public int NumeroPassageiros;
	public int velocidadeActual;
	
	public Transporte(String nome) {
		this.nome = nome;
	}

	public boolean estaParado() {
		return false;
	}
	
	

}
