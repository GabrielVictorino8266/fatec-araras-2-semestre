<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex</title>
</head>
<body>
    <?php
    $message;

    $a = 10;
    $b = 20;

    if($a > $b){
        $message = "a is the biggest.";
    }elseif($a == $a){  
        $message = "b is the biggest";
    }else{
        $message = "both are equal";
    }

    echo "$message <br>";

    $a = (string) $a;
    $b = (string) $b;

    echo "A: $a and $b<br>";
    echo "A type:". gettype($a) ." and B type:". gettype($b)."<br>";

    if($a > $b){
        $message = "a is the biggest.";
    }elseif($a == $a){  
        $message = "b is the biggest";
    }else{
        $message = "both are equal";
    }

    echo $message;


    ?>
    
</body>
</html>