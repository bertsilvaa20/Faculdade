
public class Bicicleta extends TransporteTerrestre implements Conduzivel{
	
	public int numeroRaios;
	
	public Bicicleta(String nome, int numeroRaios) {
		super(nome, nome);
		this.numeroRaios = numeroRaios;
		
	}

	public void curvar(float angulo) {
		
		System.out.println("Curvando a bicicleta" + angulo + " graus!!");
		
	}
	
	public void pedalar() {
		
		System.out.println("Pedalando!");
	}

	@Override
	public void curvarEsquerda(float angulo) {
		
		System.out.println("Curvando a bicicleta " + angulo + " graus para a esquerda!!");
		
	}

	@Override
	public void curvarDireita(float angulo) {
		
		System.out.println("Curvando a bicicleta " + angulo + " graus para a esquerda!!");
		
	}
	
    public void info() {
		
		System.out.println("Nome do bicicleta: " + nome);
		System.out.println("Numero de raios: " + numeroRaios);
		
	}

}
