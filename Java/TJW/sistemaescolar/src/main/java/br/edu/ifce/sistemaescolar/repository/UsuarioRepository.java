package br.edu.ifce.sistemaescolar.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import br.com.ifce.sistemaescolar.beans.Usuario;
public interface UsuarioRepository extends JpaRepository<Usuario,Long > {
}