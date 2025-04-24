<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<html>
<head>
<title>Login</title>
<script type="text/javascript">
  function validarCampos() {
    var usuario = document.getElementById("usuario").value;
    var senha = document.getElementById("senha").value;

    if (usuario === "" || senha === "") {
      alert("Por favor, preencha todos os campos.");
      return false;
    }

    return true;
  }
</script>
</head>
<body>

<% if ("1".equals(request.getParameter("erro"))) { %>
  <p style="color:red;"><strong>Usuário ou senha inválidos!</strong></p>
<% } %>

<form id="formulario" name="formulario1" method="post" action="Login" onsubmit="return validarCampos();">
  <p>Digite seu login :
    <input type="text" name="usuario" id="usuario" />
  </p>
  <p>Digite sua senha:
    <input type="password" name="senha" id="senha" />
  </p>
  <p>
    <input type="submit" name="button" id="button" value="Efetuar Login" />
  </p>
</form>

</body>
</html>
