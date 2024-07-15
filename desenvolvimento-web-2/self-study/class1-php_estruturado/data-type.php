<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        /*
        Multi
        Line
        Comments
        */


        // Constantes - como declarar
        const PAIS = "Brasil";
        const CIDADE = "Leme";
        
        // Variables - como declarar
        $nome = "Gabriel";
        $sobrenome = "Victorino";

        // Regras básicas

        // $4 = 4; // Não é possivel, já que variável não pode iniciar com numero..
        $_4 = 4; // Funciona 
        
        /*
        Data types used by PHP to declare or construct variables:

            Integers - numeros positivos e negativos
            Doubles - float, real são a mesma coisa. Representa valores decimais
            NULL
            Strings - cadeias de texto, como a sentença "Hello, World!"
            Booleans - corresponde a valor 1 e 0, correspondente a true e false. 0 no php em um output é vazio.
            Arrays - representam conjunto de dados, como vetores. Php aceita tipos diferentes dentro dos arrays (Composto)
            Objects - (compostos)
            Resources
        */

        // SIMPLES (ESCALARES)

        // strings
        $nome = "Gabriel";
        $sobrenome = "Victorino";

        // integer
        $tip_inteiro = 4;
        $tip_inteiro = -4;

        // float/double
        $tipo_float = 5.6;
        $tipo_float = -6.8;

        //bool
        $tipo_bool = true;
        $tipo_bool = false; //echo retorna vazio

        // COMPOUNDS (COMPOSTOS)
        $array = ['Gabriel', 20, false, true, 20.6];
        echo "$array[0]<br>";
        echo "$array[1]<br>";
        echo "$array[2]<br>";
        echo "$array[3]<br>";
        echo "$array[4]<br>";
        
        
        // forçando o tipo - aprendendo sobre coerção

        $var_inteiro = 34;
        $var_float_forcado = (int) 4.5;//Coerção

        echo "$var_float_forcado";// 4
        echo "<br>";
        var_dump($var_float_forcado);//int(4)
        echo "<br>";
        gettype($var_float_forcado);



        // binario 0b, hexadecimal 0x, octal 0

        $binary_var = 0b10101;
        $hex_var = 0x1a;
        $octal_var = 0123;
        $octal_var = 0o123;

        $hex_var = 0x1A;
        $notacao_cientifica = 4e5; // 4 * 10 ^5

        echo "hex_var= $hex_var<br>";
        echo "Tipo: " . gettype($hex_var);

        echo "<br><br><br>";
        echo "Tipo: " . gettype($notacao_cientifica);
        echo "<br>";
        var_dump($notacao_cientifica);




        // Funcoes aprendidas
        // gettype()-> retorna o tipo da variavel
        //var_dump() -> retorna diversas informacoes sobre a variavel, seu conteúdo além do tipo    
    ?>
</body>
</html>