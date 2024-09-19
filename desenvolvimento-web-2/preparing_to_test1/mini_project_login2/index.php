<?php

session_set_cookie_params(['httponly' => true]);

session_start();

if(isset($_SESSION['user_id'])){
    header('Location: dashboard.php');
    exit;
}

if($_SERVER['REQUEST_METHOD'] === 'POST'){
    if(isset($_POST['register'])){
        $username = $_POST['username'];
        $password = $_POST['password'];
        
        //creating array to send user data by php
        $users = [
            'gabriel' => password_hash('1234', PASSWORD_DEFAULT),
            'fernando' => password_hash('1111', PASSWORD_DEFAULT)
        ];
        
        if(isset($users[$username]) && password_verify($password, $users[$username])){
            $_SESSION['user_id'] = $username;
            echo var_dump($_SESSION['user_id']);
            header('Location: dashboard.php');
            exit;
        }else{
            $error = 'invalid username or password. Try again.';
        }
    }
}

?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Index</title>
</head>
<body>
    <h1>Welcome to the Index Page!</h1>
    <form action="" method="post">
        <label for="username">Username:</label>
        <input type="text" name="username" id="username"><br><br>

        <label for="password">Password:</label>
        <input type="password" name="password" id="password">

        <!-- <input type="submit" name='register' value="Login"> -->
        <button type="submit" name='register'>Login B</button>

        <?php if(isset($error)) echo "<p><strong>$error</strong></p>";?>
    </form>
</body>
</html>