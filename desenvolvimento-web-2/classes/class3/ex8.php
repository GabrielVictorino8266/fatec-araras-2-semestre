<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex</title>
</head>
<body>
    <?php
    $mynum = 150;

    echo "Number inputed: $mynum <br>";

    function divided_by_ten($num){
        if($num % 10 == 0){
            return TRUE;
        }
        return FALSE;
    }

    function divided_by_three($num){
        if($num % 3 == 0){
            return TRUE;
        }

        return FALSE;
    }

    function compare_divisions($num){
        $division_ten = divided_by_ten($num);
        $division_three = divided_by_three($num);

        if($division_ten && $division_three){
            echo "Divided by 10 and 3<br>";
        }else{
            echo "This number not reach 1 of the 2 validation divisions.<br>";
        }   
    }
    
    echo compare_divisions($mynum);





    ?>
    
</body>
</html>