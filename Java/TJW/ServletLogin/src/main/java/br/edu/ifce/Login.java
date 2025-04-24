package br.edu.ifce;
import br.edu.ifce.UsuarioBean;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;


import org.apache.commons.beanutils.BeanUtils;

public class Login extends HttpServlet {
  protected void doPost(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {

    UsuarioBean usuario = new UsuarioBean();

    try {
      BeanUtils.populate(usuario, request.getParameterMap());
    } catch (Exception e) {
      e.printStackTrace();
    }

    // Validação simples (mock) — poderia ser com BD futuramente
    if ("admin".equals(usuario.getUsuario()) && "123".equals(usuario.getSenha())) {
      request.getSession().setAttribute("usuario", usuario.getUsuario());
      response.sendRedirect("PagMail");
    } else {
      response.sendRedirect("formlogin.jsp?erro=1");
    }
  }
}
