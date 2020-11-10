<?php
session_start();
?>
<!DOCTYPE html>
<html lang="pt-br">
	<head>
		<meta charset="utf-8">
		<title> Cadastro </title>		
	</head>
	<body>
		<h1>Cadastro de Usuários</h1>
		<?php
		if(isset($_SESSION['msg'])){
			echo $_SESSION['msg'];
			unset($_SESSION['msg']);
		}
		?>
		<form method="POST" action="processa.php">
			<label>Nome: </label>
			<input type="text" name="nome" placeholder="Digite o nome completo"><br><br>
			
			<label>E-mail: </label>
			<input type="email" name="email" placeholder="Digite o seu melhor e-mail"><br><br>

			<label>data de nascimento: </label>
			<input type="string" name="data_nascimento" placeholder="digite a sua data de nascimento"><br><br>

			<label>região localizado: </label>
			<input type="text" name="regiao" placeholder="digite a regiao localizado(a)"><br><br>

			<label>telefone: </label>
			<input type="text" name="telefone" placeholder="Digite o seu telefone"><br><br>
			
			<input type="submit" value="Cadastrar">
		</form></br>
		<button><a href="/avaliacao02/users.php">Ver usuários cadastrados</a></button>
	</body>
</html>