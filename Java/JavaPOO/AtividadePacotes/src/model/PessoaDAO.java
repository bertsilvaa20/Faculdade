package model;

import java.io.IOException;
import java.io.BufferedWriter;
import java.io.FileWriter;

public class PessoaDAO {
	
	public void salvar(Pessoa p) {
		try(BufferedWriter writer = new BufferedWriter(new FileWriter("pessoas.txt", true))){
			
			writer.write(p.getNome());
			writer.newLine();
		} catch(IOException e ) {
			e.printStackTrace();
		}
	}

}
