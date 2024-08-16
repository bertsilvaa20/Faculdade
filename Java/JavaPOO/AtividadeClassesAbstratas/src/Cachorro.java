
public class Cachorro extends Animal{
	
	public Cachorro(String nome) {
		super(nome);
	}
	
	
	@Override
	void som() {
		System.out.println("O cachorro late: Au Au!");
	}
	
	@Override
	void mover() {
		System.out.println("O cachorro corre.");
	}

}
