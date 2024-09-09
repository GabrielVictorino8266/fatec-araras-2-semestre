<?php
        session_start();
        if(isset($_SESSION['loggedin']) !== true ){
            header("location: index.php");
            exit;
        }else{
            echo "Username logado: " . $_SESSION['username'];
        }
?>



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Register People</title>
</head>
<body>
    <form action="ending_register.php" method='POST'>
        <label for="username">Username: </label>
        <input type="text" name="username" id="username"><br><br>
        
        <label for="username">CPF: </label>
        <input type="text" name="user_cpf" id="user_cpf"><br><br>

        <input type="submit" value="Register">
    </form>    
</body>
</html>