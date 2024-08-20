<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex</title>
</head>
<body>
    <?php
    
    function sum($a, $b){
        return $a + $b;
    }

    $a = 10;
    $b = 20;

    echo sum($a, $b) . "Passagem por valor.<br>"; 

    $b = 15;

    function sum2(&$a, $b){
        return $a + $b;
    }

    echo sum2($a, $b) . "Passagem por referencia. <br>";

    ?>
    
</body>
</html>