<?php
session_start();
include 'conexao.php';

$connection = openConnection();

// $connection = mysqli_connect($servidor, $usuario, $senha, $dbname);

$name = filter_input(INPUT_POST, 'nome', FILTER_SANITIZE_STRING);
$email = filter_input(INPUT_POST, 'email', FILTER_SANITIZE_STRING);
$nascimento = filter_input(INPUT_POST, 'data_nascimento', FILTER_SANITIZE_STRING);
$regiao = filter_input(INPUT_POST, 'regiao', FILTER_SANITIZE_STRING);
$telefone = filter_input(INPUT_POST, 'telefone', FILTER_SANITIZE_STRING);

// error_log("nome =>  ".$name);

$query_result_usuario = "INSERT INTO usuarios (nome, email, nascimento, regiao, telefone) VALUES ('".$name."', '".$email."', '".$nascimento."', '".$regiao."', '".$telefone."' )";
$resultado_usuario = mysqli_query($connection, $query_result_usuario);


if(mysqli_insert_id($connection)){
	$_SESSION['msg'] = "<p style='color:green;'>Usuário cadastrado com sucesso.</p>";
	header("Location: index.php");
}else{
	$_SESSION['msg'] = "<p style='color:red;'>Usuário não cadastrado.</p>";
	header("Location: index.php");
}

closeConecction($connection);
?>