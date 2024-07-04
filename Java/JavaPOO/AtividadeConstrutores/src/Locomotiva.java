public class Locomotiva extends RecursoFerroviario{
	
	 private double capacidadeTracao;
	    private double comprimento;

	    public Locomotiva(String numeroSerie, double capacidadeTracao, double comprimento) {
	        super(numeroSerie);
	        this.capacidadeTracao = capacidadeTracao;
	        this.comprimento = comprimento;
	}

}
