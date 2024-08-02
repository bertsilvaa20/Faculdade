
public class Execucao {

    public static void main(String[] args) {
        testarData(29, 2, 2024); // Ano bissexto
        testarData(29, 2, 2023); // Não é ano bissexto
        testarData(31, 4, 2023); // Abril tem 30 dias
        testarData(30, 6, 2023); // Junho tem 30 dias, válido
        testarData(15, 13, 2023); // Mês inválido
        testarData(32, 12, 2023); // Dia inválido em dezembro
        testarData(0, 10, 2023);  // Dia inválido (menor que 1)
        testarData(1, 1, 0);      // Ano inválido (menor que 1)
    }

    public static void testarData(int dia, int mes, int ano) {
        try {
            Data data = new Data(dia, mes, ano);
            System.out.println("Data válida: " + data);
        } catch (DataException e) {
            System.out.println("Exceção: " + e.getMessage() + " - Data inválida: " + e.getDataInvalida());
        }
    }
}
