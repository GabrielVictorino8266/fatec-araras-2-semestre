<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex2</title>
</head>
<body>
    <?php
    
    $a = 10;
    $b = 10;

    if($a > $b){
        $message = "a is the biggest.";
    }else if($a == $b){
        $message = "both are equal";
    }else{
        $message = "b is the biggest.";
    }

    echo $message;

    ?>
    
</body>
</html>