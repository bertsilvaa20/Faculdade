
public class Gato extends Animal{
	
	public Gato(String nome) {
		super(nome);
	}
	
	@Override
	void som() {
		System.out.println("O gato mia: Miau!");
	}
	
	void mover(){
		System.out.println("O gato anda silenciosamente.");
	}
	
	

}
