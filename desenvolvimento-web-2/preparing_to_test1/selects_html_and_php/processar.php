<?php
if (isset($_POST['opcao'])) {
    $opcaoSelecionada = $_POST['opcao'];
    echo "Você escolheu: " . $opcaoSelecionada;
} else {
    echo "Nenhuma opção selecionada.";
}
?>
