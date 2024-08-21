import java.util.Objects;

public class Produto {
	
	private String nome;
	private String descricao;
	private double preco;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getDescricao() {
		return descricao;
	}
	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	public double getPreco() {
		return preco;
	}
	public void setPreco(double preco) {
		this.preco = preco;
	}
	
	public Produto(String nome, String descricao, double preco) {
		this.nome = nome;
		this.descricao = descricao;
		this.preco = preco;
		
	}
	@Override
	public String toString() {
		return "Produto [nome=" + nome + ", descricao=" + descricao + ", preco=" + preco + "]";
	}
	@Override
	public int hashCode() {
		return Objects.hash(descricao, nome, preco);
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Produto produto = (Produto) obj;
		return Double.compare(produto.preco, preco) == 0 &&
	               nome.equals(produto.nome) &&
	               descricao.equals(produto.descricao);
	    }
	
	
	

}
