<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>




<?php
    $file = 'reading.txt';

    if(file_exists($file)){
        $content = file_get_contents($file);
        echo $content;
        echo nl2br($content);//preserva quebra de linha
    }


?>
</html>