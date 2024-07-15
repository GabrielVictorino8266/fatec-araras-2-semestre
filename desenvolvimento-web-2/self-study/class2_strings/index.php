<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Class2 - Strings</title>
</head>
<body>
    <?php
    // Single Quoted - não performam ação sobre variáveis.
    // Double Quoted - a depender do conteúdo, performa uma ação sobre;
        //Double Quoted with variables
        $mynumber = 10;
        echo "My number is $mynumber !";
        echo '<br>'; //breaks line

        //mas, single quoted não o fazem.
        echo 'My number is $mynumber !<br>';
        //TIP_TIP_TIP: em string, sempre single_quote. Quando quiser mostrar variável, mostre com double_quoted
        
        //double quoted não funciona com constante:
        const ESTADO = "SP";
        echo "<br>Estado ESTADO<br>";
        echo "Maneira correta: Estado " . ESTADO . "<br>";

        echo '<br>';

    //Mais praticos sobre single quoted e double quoted

    // concatenação de strings
    $language = 'php \u{1F418}';
    $second_language = "php	\u{1F418} <br>";
    $course = 'Curso em Vídeo';
    echo $course . $language;
    echo $course . $second_language;
    
    echo "<br>";

    //Obter tamanho de uma string
        $mystring = 'Hello, my name is Gabriel!';
        echo 'Meu texto é: $mystring';
        echo '<br>';
        echo strlen($mystring);
        echo '<br>';


    //Word_Count: performa uma ação de contagem de palavras em uma string - str_word_count()
    echo 'Contagem de palavras: <br>';
    echo str_word_count($mystring);
    echo '<br>';

    //Search for text - strpos()
    $wantfind = 'Gabriel';
    echo 'Search for text within a string.<br>';
    echo "Quero encontrar: $wantfind";
    echo '<br>';
    echo strpos($mystring, "Gabriel");



    ?>
</body>
</html>