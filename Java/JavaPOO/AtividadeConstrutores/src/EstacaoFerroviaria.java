import java.util.ArrayList;

class EstacaoFerroviaria {
    private String sigla;
    private String descricao;
    private ArrayList<LinhaFerroviaria> linhas;

    public EstacaoFerroviaria(String sigla, String descricao, ArrayList<LinhaFerroviaria> linhas) {
        this.sigla = sigla;
        this.descricao = descricao;
        this.linhas = linhas;
    }

}
