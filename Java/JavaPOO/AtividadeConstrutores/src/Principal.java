import java.util.ArrayList;

public class Principal {
	
	public static void main(String[] args) {
		
		Vagao vagao1 = new Vagao("V001", "carga geral", 50.0, 10.5, 5.2);
		Vagao vagao2 = new Vagao("V002", "tanque", 70.0, 12.0, 6.0);
		Vagao vagao3 = new Vagao("V003", "carga geral", 60.0, 11.0, 5.5);
		Locomotiva locomotiva = new Locomotiva("L001", 200.0, 25.0);
		
		ArrayList<RecursoFerroviario> recursosTrem = new ArrayList<>();
		recursosTrem.add(locomotiva);
		recursosTrem.add(vagao1);
		recursosTrem.add(vagao2);
		recursosTrem.add(vagao3);
		
		EstacaoFerroviaria estacaoOrigem = new EstacaoFerroviaria("IO", "Estacao de Origem", new ArrayList<>());
	    EstacaoFerroviaria estacaoDestino = new EstacaoFerroviaria("ID", "Estacao de Destino", new ArrayList<>());
	    Trem trem = new Trem("NAG1010", "2024-03-28", estacaoOrigem, estacaoDestino, recursosTrem);
	    
	    LinhaFerroviaria linha = new LinhaFerroviaria (1, 10000.0, "Linha principal");
	    estacaoOrigem.getLinhas().add(linha);
	    estacaoDestino.getLinhas().add(linha);
	    
	    System.out.println("Trem prefixo: " + trem.getPrefixo());
	    System.out.println("Trem recursos:");
	    
	    for (RecursoFerroviario recurso: trem.getRecursos()) {
	    	if (recurso instanceof Locomotiva) {
	    		System.out.println("- Locomotiva " + ((Locomotiva) recurso).getNumeroSerie());
	    	} else if (recurso instanceof Vagao) {
	    		System.out.println("- Vagao " + ((Vagao) recurso).getNumeroSerie());
	    	}
	    }
	
	}
	
}
