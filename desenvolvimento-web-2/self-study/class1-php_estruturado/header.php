<?php
    echo "ola\n"; //produz um erro, pois não podem haver output antes de uma tag header
    header("Content-Type: application/json");
    $data = ["response: " => "Hello, world!"]; // criar um array para simular o content-type json
    echo json_encode($data);//todo json precisa de encode para ser criado e decode para ser decodificado



?>