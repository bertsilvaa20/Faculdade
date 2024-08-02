
public class ExemploDiretivas {

    // Método que pode lançar uma exceção e declara isso com a palavra-chave throws
    public static void metodoQuePodeLancarExcecao(boolean condicao) throws Exception {
        if (condicao) {
            throw new Exception("Uma exceção foi lançada explicitamente!"); // Usando throw para lançar uma exceção
        }
        System.out.println("Nenhuma exceção lançada, método executado com sucesso.");
    }

    public static void main(String[] args) {
        try {
            // Tentando executar o método que pode lançar uma exceção
            metodoQuePodeLancarExcecao(true);
        } catch (Exception e) {
            // Captura e trata a exceção lançada pelo método
            System.out.println("Exceção capturada no bloco catch: " + e.getMessage());
        }

        // Executando o método sem que ele lance uma exceção
        try {
            metodoQuePodeLancarExcecao(false);
        } catch (Exception e) {
            System.out.println("Exceção capturada no bloco catch: " + e.getMessage());
        }
    }
}
