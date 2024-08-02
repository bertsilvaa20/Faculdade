import javax.swing.JOptionPane;

public class Cadastro {
	
	public static void main(String[] args) {
		
		boolean cadastroCompleto = false;
		
		while (!cadastroCompleto) {
			
		try {
		String nomeCompleto = JOptionPane.showInputDialog("Digite o seu nome completo: ");
		
		if (nomeCompleto == null || nomeCompleto.trim().isEmpty()) {
			
			throw new IllegalArgumentException("O nome completo não pode ser vazio!");
		}
		
		
		String ddd = JOptionPane.showInputDialog("Digite o DDD (deve ser 2 dígitos inteiros):  ");
		
		if (ddd == null || ddd.length() != 2 || !ddd.matches("\\d{2}")) {
			throw new IllegalArgumentException("O DDD deve ter exatamente 2 dígitos!");
		}
		
		String numero = JOptionPane.showInputDialog("Digite o número de telefone (8 ou 9 dígitos): ");
		
		if (numero == null || !(numero.length() == 8 || numero.length() == 9) || !numero.matches("\\d{8,9}")) {
			throw new IllegalArgumentException("O telefone deve ter 8 ou 9 dígitos!");
		}
		
		JOptionPane.showInputDialog(null, "Cadastro realizado com sucesso!\n"
				+ "Nome Completo: " + nomeCompleto + "\n"
				+ "Telefone: (" + ddd + ") " + numero);
		
		cadastroCompleto = true;
		
		} catch(IllegalArgumentException e ) {
			
			JOptionPane.showInputDialog(null, "Erro: " + e.getMessage() + "\nPor favor, tente novamente.", "Erro", JOptionPane.ERROR_MESSAGE);
		}
		
	}
	}

}
