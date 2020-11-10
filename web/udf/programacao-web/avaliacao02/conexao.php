<?php


function openConnection() 
{
    $servidor = "localhost";
    $usuario = "root";
    $senha = "";
    $dbname = "torcida";
    $connection = mysqli_connect($servidor, $usuario, $senha, $dbname);

    if (!$connection) {
        echo "Error: Unable to connect to MySQL." . PHP_EOL;
        echo "Debugging errno: " . mysqli_connect_errno() . PHP_EOL;
        echo "Debugging error: " . mysqli_connect_error() . PHP_EOL;
        exit;
    }
    echo "Success: A proper connection to MySQL was made! The my_db database is great." . PHP_EOL;
    echo "Host information: " . mysqli_get_host_info($connection) . PHP_EOL;

    return $connection;
}

//Criar a conexao

function closeConecction($conn)
{
    $conn -> close();
 }

 ?>
