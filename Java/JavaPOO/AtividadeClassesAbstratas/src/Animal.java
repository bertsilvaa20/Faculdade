
public abstract class Animal {
	
	String nome;
	
	public Animal (String nome) {
		this.nome = nome;
	}
	
	abstract void som();
	abstract void mover();
	
	void info() {
		System.out.println("Nome: " + nome);
	}

}
