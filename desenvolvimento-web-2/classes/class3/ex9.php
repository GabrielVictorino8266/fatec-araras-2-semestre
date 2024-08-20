<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex</title>
</head>
<body>
    <?php
    $grade1 = 9;
    $grade2 = 4;
    $average = ($grade1 + $grade2) / 2;

    $message = "Rejected.";

    if($average > 7){
        $message = "Aproved";
    }else if($average >=5 && $average <=6.9){
        $message = "Recovery";
    }

    echo $message;



    ?>
    
</body>
</html>