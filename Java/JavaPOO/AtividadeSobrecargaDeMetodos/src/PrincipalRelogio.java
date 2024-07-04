public class PrincipalRelogio {
	    
	    public static void main(String[] args) {
	    	
	        Relogio relogio = new Relogio();
	        
	        
	        relogio.inicializar(10, 30, 45);
	        relogio.exibirHorario();
	        
	        
	        relogio.inicializar(8, 15);
	        relogio.exibirHorario();
	        
	        
	        relogio.inicializar(6);
	        relogio.exibirHorario();
	    }
	}
