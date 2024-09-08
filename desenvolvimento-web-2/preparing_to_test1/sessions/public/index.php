<?php
session_set_cookie_params(['lifetime'=> 10, 'httponly' => true]);//alterando a duracao do cookie, no entanto, o padrao e manter o lifetime enquanto o navegador esta aberto.

session_start(); // iniciou  a sessao.

echo "Session_id: ";
echo var_dump(session_id());

// Em caso de apos realizar o login, precisamos gerar um novo login

session_regenerate_id(true);//gera um outro id, com o param True, ele exclui a sessao antiga.

echo var_dump(session_id());

//declarando SESSIONS
// $_SESSION['user'] = 'Alexandre';

//Alem de funcionar da maneira acima, tambem pode ser passado um array de dados:

// $_SESSION['user_2'] = [
//     'name' => 'Gabriel',
//     'age' => 20,
// ];


$_SESSION['logged_in'] = true;