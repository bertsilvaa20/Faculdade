
public class Execucao {
	
	public static void main(String[] args) {
		
		Animal cachorro = new Cachorro("Bob");
		Gato gato = new Gato("Snape");
		
		cachorro.info();
		cachorro.som();
		cachorro.mover();
		
		System.out.println();
		
		gato.info();
		gato.som();
		gato.mover();
		
	}

}
