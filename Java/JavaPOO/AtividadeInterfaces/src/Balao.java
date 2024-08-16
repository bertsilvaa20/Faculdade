
public class Balao extends TransporteAereo{
	
	public int pesoLargada;

	public Balao(String nome, int pesoLargada) {
		super(nome);
		this.pesoLargada = pesoLargada;
	}
	
	public Balao(String nome) {
		super(nome);
	}

	public void aquecerAr(float temperatura) {
		System.out.println("Aquecendo ar..." + "\nTemperatura atual: " + temperatura);
	}
	
	public void largarPeso(float peso) {
		System.out.println("Largando peso... " + "\nPeso: " + peso);
	}
	
	public void info() {
		
		System.out.println("Nome do balão: " + nome);
		System.out.println("Peso largada: " + pesoLargada);
	}

}
