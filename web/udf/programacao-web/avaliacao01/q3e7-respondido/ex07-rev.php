<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Exercício 07 de Revisão</title>
	</head>
	<body>
		<form action="ex07-rev.php" method="GET">
			<label>Linhas</label>
			<input type="number" name="linhas">
			<label>Colunas</label>
			<input type="number" name="colunas">
			<label>Texto</label>
			<input type="text" name="texto">
			<button type="submit">Enviar</button>
		</form>
		<?php
			$row = @$_REQUEST["linhas"];
			$col = @$_REQUEST["colunas"];
			$txt = @$_REQUEST["texto"];

			print "<table border='1'>";
			for($i=1;$i<=$row;$i++){
				print "<tr>";
				for($j=1;$j<=$col;$j++){
					print "<td>";
					print $txt;
					print "</td>";
				}
				print "</tr>";
			}
			print "</table>";

		?>
	</body>
</html>
