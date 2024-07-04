public class Vagao extends RecursoFerroviario {

	 private String tipo;
	    private double capacidadeCarga;
	    private double comprimentoTesteiras;
	    private double comprimentoEngates;

	    public Vagao(String numeroSerie, String tipo, double capacidadeCarga, double comprimentoTesteiras, double comprimentoEngates) {
	        super(numeroSerie);
	        this.tipo = tipo;
	        this.capacidadeCarga = capacidadeCarga;
	        this.comprimentoTesteiras = comprimentoTesteiras;
	        this.comprimentoEngates = comprimentoEngates;
		
	}
	
}
