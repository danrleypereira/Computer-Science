<?php
session_start();
?>
<!DOCTYPE html>
<html lang="pt-br">
	<head>
		<meta charset="utf-8">
		<title> Usuários </title>		
	</head>
	<body>
		<h1>Lista de usuários</h1>
		<?php
			include 'conexao.php';
			
			$connection = openConnection();
			
			$query_result_usuarios = "SELECT nome, email, nascimento, telefone, regiao FROM `usuarios`";
			$resultado_usuarios = mysqli_query($connection, $query_result_usuarios);
			if(!$resultado_usuarios){
				die('Could not query:' . mysql_error());
			}
			// echo mysqli_query($connection, $resultado_usuarios); // outputs third employee's name


			if ($result = mysqli_query($connection, $query_result_usuarios)) {

				printf("<table><thead><tr><th>Nome</th><th>Email</th><th>Nascimento</th><th>Telefone</th><th>Região</th>região</tr><thead><tbody>");
				/* fetch associative array */
				while ($row = mysqli_fetch_assoc($result)) {
					printf ("<tr><td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td> </tr>", $row["nome"], $row["email"], $row["nascimento"], $row["telefone"], $row["regiao"]);
				}

				printf("</tbody></table>");
			
				/* free result set */
				mysqli_free_result($result);
			}

			// if ($result = mysqli_query($connection, $query_result_usuarios)) {
			// 	for($i = 0; $i < 4; $i++) {
			// 		if (mysqli_data_seek($result, $i)) {
			// 			$row = mysqli_fetch_assoc($result);
			
			// 			//ID do pet
			// 			echo  $row['nome'];
			// 		}
			// 	}
			// 	mysqli_free_result($result);
			// }


			// error_log($resultado_usuarios);
			
			closeConecction($connection);


		?>

		<button><a href="/avaliacao02/index.php">Cadastrar</a></button>
	</body>
</html>