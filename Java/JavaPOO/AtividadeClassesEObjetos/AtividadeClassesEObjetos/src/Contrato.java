import java.util.ArrayList;
import java.util.Date;
import java.util.List;



public class Contrato {
	
	Pessoa titular;
	List<Pessoa> dependentes;
	List<Consulta> historicoConsultas;
	List<Exame> historicoExames;
	Date dataContrato;
	Date dataReajuste;
	Fatura faturaMensal;

}
