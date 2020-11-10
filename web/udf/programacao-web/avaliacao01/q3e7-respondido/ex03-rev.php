<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Exercício 03 de Revisão</title>
	</head>
	<body>
		<form action="ex03-rev.php" method="GET">
			<label>Número</label>
			<input type="number" name="numero">
			<button type="submit">Enviar</button>
		</form>
		<?php
			$num = $_REQUEST["numero"];

			for($i=1;$i<=10;$i++){
				$total = $i * $num;
				print $num." x ".$i." = ".$total."<br>";
			}
		?>
	</body>
</html>