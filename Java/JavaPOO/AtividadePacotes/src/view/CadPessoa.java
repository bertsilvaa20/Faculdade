package view;

import controller.CtrlPessoa;
import model.Pessoa;

import javax.swing.JOptionPane;

public class CadPessoa {

    public static void main(String[] args) {
        String nome = JOptionPane.showInputDialog("Digite o nome da pessoa:");
        
        Pessoa pessoa = new Pessoa(nome);
        CtrlPessoa ctrlPessoa = new CtrlPessoa();
        
        try {
            ctrlPessoa.salvar(pessoa);
            JOptionPane.showMessageDialog(null, "Pessoa salva com sucesso!");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e.getMessage(), "Erro", JOptionPane.ERROR_MESSAGE);
        }
    }
}
