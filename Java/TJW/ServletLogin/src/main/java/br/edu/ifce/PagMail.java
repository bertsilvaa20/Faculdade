package br.edu.ifce;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class PagMail extends HttpServlet {
  protected void service(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {

    String user = (String) request.getSession().getAttribute("usuario");

    if (user == null) {
      RequestDispatcher dispatcher = request.getRequestDispatcher("formlogin.jsp");
      dispatcher.forward(request, response);
    } else {
      PrintWriter out = response.getWriter();
      out.println("<html><body>");
      out.println("<h1>Bem-vindo ao PagMail, " + user + "!</h1>");
      out.println("</body></html>");
    }
  }
}
