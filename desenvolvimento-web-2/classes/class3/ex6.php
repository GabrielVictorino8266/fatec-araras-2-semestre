<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex6</title>
</head>
<body>
    <?php
    
    $dictionaries = [
        "n1" => 10,
        "n2" => 20,
        "n3" => 30,
        "n4" => 'oi mundo',
    ];

    echo "Printing array type: " . gettype($dictionaries) ."<br>";
    
    echo "Printing array elements: <br>";
    foreach($dictionaries as $dictionary){
        echo "$dictionary" . "<br>";
    };

    echo "Trying to access a dictionary" . '$dictionaries' . " with the key teste";

    echo $dictionaries['teste']; //Expected: Undefined array key

    ?>
    
</body>
</html>