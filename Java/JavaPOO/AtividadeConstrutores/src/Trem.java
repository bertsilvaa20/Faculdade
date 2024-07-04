import java.util.ArrayList;

public class Trem {
	
	private String prefixo;
    private String dataFormacao;
    private EstacaoFerroviaria estacaoOrigem;
    private EstacaoFerroviaria estacaoDestino;
    private ArrayList<RecursoFerroviario> recursos;

    public Trem(String prefixo, String dataFormacao, EstacaoFerroviaria estacaoOrigem, EstacaoFerroviaria estacaoDestino, ArrayList<RecursoFerroviario> recursos) {
        this.prefixo = prefixo;
        this.dataFormacao = dataFormacao;
        this.estacaoOrigem = estacaoOrigem;
        this.estacaoDestino = estacaoDestino;
        this.recursos = recursos;
	}


}
