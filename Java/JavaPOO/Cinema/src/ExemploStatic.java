
public class ExemploStatic {
	
	int atributoDeObjeto = 0;
	static int atributoDeClasse = 0;
	
	public static void main(String[] args) {
		
		ExemploStatic e1 = new ExemploStatic();
		e1.atributoDeObjeto = 10;
		ExemploStatic.atributoDeClasse = 10;
		ExemploStatic e2 = new ExemploStatic();
		e2.atributoDeObjeto = 15;
		ExemploStatic.atributoDeClasse = 15;
		
		System.out.println("E1 atributo objeto: "+e1.atributoDeObjeto);
		System.out.println("E2 atributo objeto: "+e2.atributoDeObjeto);
		
		System.out.println("E1 atributo classe: "+ExemploStatic.atributoDeClasse);
		System.out.println("E2 atributo classe: "+ExemploStatic.atributoDeClasse);
		
	}

}
