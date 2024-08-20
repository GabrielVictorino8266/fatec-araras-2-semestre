<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ex</title>
</head>
<body>
    <?php    
        // declare(strict_types=1);
        const MAX = 10;
        const MIN = 0;

        function average_grades(float $grade1, float $grade2): string{
            if(($grade1 > MAX || $grade2 > MAX) || ($grade1 < MIN || $grade2 < MIN)){
                return "Invalid grades. Try again.<br>";
            }

            $average = ($grade1 + $grade2) / 2;
            $message = "Rejected.";

            if($average > 7){
                $message = "Aproved";
            }else if($average >=5 && $average <=6.9){
                $message = "Recovery";
            }

            return $message;
        }

        $grade1 = (float) 10;
        $grade2 = (float) 10;

        echo average_grades($grade1, $grade2);
            
    ?>
    
</body>
</html>