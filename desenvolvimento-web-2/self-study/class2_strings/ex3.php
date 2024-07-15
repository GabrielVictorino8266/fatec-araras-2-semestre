<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ex3</title>
</head>
<body>
    <?php
    // Exercício 3: Contagem de Palavras
    // Crie uma variável $paragraph e atribua a ela um parágrafo de texto.
    // Exiba o parágrafo armazenado em $paragraph.
    // Use a função str_word_count() para exibir a quantidade de palavras no parágrafo.
    $paragraph = 'A popular general-purpose scripting language that is especially suited to web development. Fast, flexible and pragmatic, PHP powers everything from your blog to the most popular websites in the world.';

    echo 'Now, we will see the word count in php. Take a look: <br>';
    echo str_word_count($paragraph) . " words founded.";
    ?>
</body>
</html>