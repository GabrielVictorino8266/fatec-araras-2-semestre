<?php
        session_start();
        if(isset($_SESSION['loggedin']) !== true ){
            header("location: index.php");
            exit;
        }else{
            echo "Username logado: " . $_SESSION['username'];
        }

        if(!isset($_POST['username']) || !isset($_POST['user_cpf'])){
            echo "username existe e/ou cpf inválidos.";
        }else{
            $file_name = 'user_cpf.txt';
            $content_file = "\nUsername and CPF: " . $_POST['username'] . " " . $_POST['user_cpf'] . " " . date('Y-m-d H:i:s') . "\n";

            file_put_contents($file_name, $content_file, FILE_APPEND);
        };
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ending Register</title>
</head>
<body>
    <h3>Your register was succesfully completed!</h3>
    <a href="welcome.php">Voltar para Welcome</a>
</body>
</html>