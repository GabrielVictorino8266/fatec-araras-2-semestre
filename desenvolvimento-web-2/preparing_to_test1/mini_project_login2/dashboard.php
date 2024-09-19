<?php

session_start();

if(!isset($_SESSION['user_id'])){
    header('Location: index.php');
    exit;
};

$user_id = $_SESSION['user_id']
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dashboard</title>
</head>
<body>
    <h1>Welcome, <?php echo $user_id; ?>!</h1>
    <a href="logout.php">I want logout.</a>
</body>
</html>