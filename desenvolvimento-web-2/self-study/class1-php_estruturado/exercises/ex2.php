<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício 2: Verificação de Tipo de Variável</title>
</head>
<body>
    <?php
        $verification_type = 4; //int
        $verification_type = 4.4;//float

        echo "Vamos advinhar o tipo da variável: $verification_type";
        echo "<br>";
        echo "O tipo é: " . gettype($verification_type);
        echo "<br>";
        echo "O tipo é (vardump):";
        var_dump($verification_type);
    ?>
</body>
</html>