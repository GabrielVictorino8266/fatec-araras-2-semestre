<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ex4</title>
</head>
<body>
    <?php
    // Exercício 4: Procurar Texto em uma String
    // Crie uma variável $text e atribua a ela um texto qualquer.
    // Crie uma variável $word e atribua a ela uma palavra que você deseja encontrar no texto.
    // Use a função strpos() para encontrar a posição da palavra no texto e exiba o resultado.
    $text = 'A popular general-purpose scripting language that is especially suited to web development. Fast, flexible and pragmatic, PHP powers everything from your blog to the most popular websites in the world.';
    $word = 'language';

    echo "A palavra $word está na posição (primeiro caracter) " . strpos($text, $word) . " no texto abaixo: <br>$text";
    ?>
</body>
</html>