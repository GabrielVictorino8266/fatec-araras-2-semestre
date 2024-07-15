<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        // declaracao de variavel
        $nome = "Gabriel";
        $sobrenome = "Victorino";
        const PAIS = "Brasil"; //constantes não variam e são valores pré-definidos

        echo "Nome e sobrenome $nome, $sobrenome <br>";// imprimindo variáveis juntas. 
        echo "Moro no país: " .  PAIS;

        echo "<br>Praticando alteração de constante: <br>";
        // PAIS = "Holanda!";
        echo PAIS; // Error expected: unexpected "="
        echo "Moro em: " . PAIS;

        
    ?>
</body>
</html>