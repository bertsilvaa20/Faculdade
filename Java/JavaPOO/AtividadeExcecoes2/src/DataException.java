
public class DataException extends Exception{
	
	private final String dataInvalida;
	
	public DataException(String mensagem, String dataInvalida) {
		super(mensagem);
		this.dataInvalida = dataInvalida;
	}
	
	public String getDataInvalida() {
		return dataInvalida;
		
	}

}
