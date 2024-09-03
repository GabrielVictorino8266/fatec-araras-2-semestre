<?php

    if(isset($_COOKIE['cookie_name'])){
        echo "This cookie exists";
    }else{
        echo "This cookie does not exists.";
        setcookie('cookie_name', 'Ola..', time() + 3600);
    }