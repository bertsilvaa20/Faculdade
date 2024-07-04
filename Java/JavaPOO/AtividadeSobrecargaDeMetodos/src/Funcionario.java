public class Funcionario {

    private String nome;
    private double salario;
    private int identificador;
    private boolean emFerias;

    private static int proximoIdentificador = 1;


    public Funcionario(String nome, double salario) {
        this.nome = nome;
        this.salario = salario;
        this.identificador = proximoIdentificador++;
        this.emFerias = false;
    }


    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        if (salario >= 1100.00) {
            this.salario = salario;
        } else {
            System.out.println("O salário deve ser superior a R$ 1.100,00.");
        }
    }

    public int getIdentificador() {
        return identificador;
    }

    public boolean isEmFerias() {
        return emFerias;
    }


    public void tirarFerias() {
        tirarFerias(30);
    }

    public void tirarFerias(int dias) {
        if (!emFerias) {
            emFerias = true;
            System.out.println("O funcionário " + nome + " irá tirar " + dias + " dias de férias.");
        } else {
            System.out.println("O funcionário já está de férias.");
        }
    }
}