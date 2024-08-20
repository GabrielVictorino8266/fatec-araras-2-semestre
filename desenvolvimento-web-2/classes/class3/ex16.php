<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex14</title>
</head>
<body>
    <?php
    $user_input = 11;
   
    $array = [
        1 => 'janeiro',
        2 => 'fevereiro',
        3 => 'marco',
        4 => 'abril',
        5 => 'maio',
        6 => 'junho',
        7 => 'julho',
        8 => 'agosto',
        9 => 'setembro',
        10 => 'outubro',
        11 => 'novembro',
        12 => 'dezembro'
    ];
        
        if($user_input < 1 || $user_input > 10){
            echo "Invalid input. Try again<br>";
        }else{
            echo $array[$user_input];
        }


    ?>
    
</body>
</html>