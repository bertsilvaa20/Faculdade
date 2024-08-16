
public class Aviao extends TransporteAereo implements Motorizado, Conduzivel{
	
	int numeroMotores;
	
	public Aviao(String nome, int numeroMotores) {
		super(nome);
		this.numeroMotores = numeroMotores;
	}
	
	@Override
	public void ligarMotor() {
		
		System.out.println("Ligando motor do avião!!");
		
	}

	@Override
	public void abastecer(int numLitros) {
		
		System.out.println("Abastecendo " + numLitros + " litros de combustível!");
		
		
	}

	@Override
    public void curvarEsquerda(float angulo) {
		
		System.out.println("Curvando o avião " + angulo + " graus para a esquerda!!");
		
	}

	@Override
	public void curvarDireita(float angulo) {
		
		System.out.println("Curvando o avião " + angulo + " graus para a esquerda!!");
		
	}
	
	public void info() {
		
		System.out.println("Nome do avião: " + nome);
		System.out.println("Numero de motores: " + numeroMotores);
		
	}

}
