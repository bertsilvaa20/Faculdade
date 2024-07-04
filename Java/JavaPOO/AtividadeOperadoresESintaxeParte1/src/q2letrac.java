public class q2letrac {
	
	// Variável de classe (ou estática)
    static int variavelDeClasse = 10;

    // Variável de objeto (instância)
    int variavelDeObjeto;

    // Método principal
    public static void main(String[] args) {
        // Criando instâncias da classe
        ExemploVariaveis obj1 = new ExemploVariaveis();
        ExemploVariaveis obj2 = new ExemploVariaveis();

        // Modificando variáveis de classe
        ExemploVariaveis.variavelDeClasse = 20;

        // Modificando variáveis de objeto (instância)
        obj1.variavelDeObjeto = 5;
        obj2.variavelDeObjeto = 8;

        // Imprimindo valores
        System.out.println("Variável de Classe: " + ExemploVariaveis.variavelDeClasse);
        System.out.println("Variável de Objeto (obj1): " + obj1.variavelDeObjeto);
        System.out.println("Variável de Objeto (obj2): " + obj2.variavelDeObjeto);
    }
}
