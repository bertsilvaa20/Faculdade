
public class Data {
	
	int dia;
	int mes;
	int ano;

	public Data(int dia, int mes, int ano) throws DataException {
		
		if (mes < 1 || mes > 12) {
			throw new DataException("Mês inválido: " + mes, dia + "/" + mes + "/" + ano);
		}
		
		if (ano < 1) {
			throw new DataException("Ano inválido: " + ano, dia + "/" + mes + '/' + ano);
		}
		
		int maxDias = getMaxDiasNoMes(mes, ano);
		if (dia < 1 || dia > maxDias) {
			throw new DataException("Dia inválido: " + dia , dia + "/" + mes + "/" + ano);
		}
		
		this.dia = dia;
		this.mes = mes;
		this.ano = ano;
		
	}
	
	 private int getMaxDiasNoMes(int mes, int ano) {
	        switch (mes) {
	            case 2:
	                return (isAnoBissexto(ano)) ? 29 : 28;
	            case 4: case 6: case 9: case 11:
	                return 30;
	            default:
	                return 31;
	        }
	    }

	    private boolean isAnoBissexto(int ano) {
	        return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
	    }

	    @Override
	    public String toString() {
	        return String.format("%02d/%02d/%04d", dia, mes, ano);
	    }
	}
