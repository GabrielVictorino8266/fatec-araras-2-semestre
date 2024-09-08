<?php

session_start(); // iniciou  a sessao.

var_dump(session_id());

$_SESSION['user'] = 'Alexandre';