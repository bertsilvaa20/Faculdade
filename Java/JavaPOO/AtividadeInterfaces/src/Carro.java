
public class Carro extends TransporteTerrestre implements Motorizado, Conduzivel{
	
	public int numeroCilindradas;

	public Carro(String nome, int numeroCilindradas) {
		super(nome, nome);
		this.numeroCilindradas = numeroCilindradas;
	}

	@Override
	public void ligarMotor() {
		
		System.out.println("Ligando motor do carro!!");
		
	}

	@Override
	public void abastecer(int numLitros) {
		
		System.out.println("Abastecendo " + numLitros + " litros de combustível!");
		
		
	}
	
    public void curvarEsquerda(float angulo) {
		
		System.out.println("Curvando o carro " + angulo + " graus para a esquerda!!");
		
	}
    
    public void curvarDireita(float angulo) {
		
		System.out.println("Curvando o carro " + angulo + " graus para a direita!!");
		
	}
    
    public void embrear() {
    	System.out.println("Embreando o carro!");
    }
    
    public void info() {
		
		System.out.println("Nome do carro: " + nome);
		System.out.println("Numero de cilindradas: " + numeroCilindradas);
		
	}

}
