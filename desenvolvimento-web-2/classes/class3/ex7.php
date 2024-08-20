<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex7</title>
</head>
<body>
    <?php
    $integers_sum = 0;

    $array = [
        "n1" => 10,
        "n2" => 20,
        "n3" => 30,
        "n4" => 'oi mundo',
    ];

    foreach($array as $element){
        if(is_numeric($element)){
            echo $element . "<br>";
            $integers_sum += $element;
        }
    }

    echo "Sum of integers: " . $integers_sum;


    ?>
    
</body>
</html>