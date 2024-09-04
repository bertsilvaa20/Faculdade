package controller;

import model.Pessoa;
import model.PessoaDAO;

public class CtrlPessoa {

    public void salvar(Pessoa p) throws Exception {
        if (p.getNome() == null || p.getNome().isEmpty()) {
            throw new Exception("Não é possível salvar uma pessoa com nome nulo ou vazio.");
        }
        
        PessoaDAO pessoaDAO = new PessoaDAO();
        pessoaDAO.salvar(p);
    }
}