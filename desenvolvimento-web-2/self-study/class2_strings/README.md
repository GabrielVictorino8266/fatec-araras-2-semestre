# Class2 - Strings em PHP

Vídeo: Manipulação de strings com PHP - @CursoemVideo de PHP - Gustavo Guanabara

Links for reading: [W3schools](https://www.w3schools.com/php/php_string.asp)

Conceitos abordados no vídeo:

* Single Quoted
  * Strings em aspas simples, onde não ocorre interpretação, como por exemplo, retorno de funções e variáveis.
* Double Quoted
  * Ocorre a interpretação de variáveis e retornos de funções, além do uso de múltiplas sequências de escape. (\\)
* Funções strlen(), strpos(), str_word_count()
* Nowdoc (sem interpretação) e HereDoc (com interpretação), ambos permitem alocar textos com espaçamentos e quebras de linhas apenas por digitar o conteúdo.


##### Exemplo de uso Heredoc e Nowdoc

Heredoc

```
	//Este seria o código com heredoc
	$html =<<<HTML
  	<div id="ola">
	    <p>Olá{$seu_nome},</p>
    	<p>Que tal visitar a gente em nossa sede:{$endereco}?</p>
  	</div>
HTML;

	echo "<h2>com heredoc:</h2>".$html;
```

Nowdoc

```


	//Este seria o código com nowdoc
	$html =<<<'HTML'
  	<div id="ola">
	    <p>OláFelipe,</p>
    	<p>Que tal vir comer um queijo com a gente?</p>
  	</div>
HTML;

	echo "<h2>com heredoc:</h2>".$html;
```


# Exercícios Praticando Class2 - PHP

Exercícios práticos aplicando conceitos na ordem em que foram vistos.

### Exercício 1: Entendendo Single e Double Quoted Strings

1. Crie uma variável `$name` e atribua a ela o seu nome.
2. Use a variável `$name` dentro de uma string com aspas duplas para exibir a mensagem: `Meu nome é [seu nome]`.
3. Use a mesma variável `$name` dentro de uma string com aspas simples e observe o comportamento.

### Exercício 2: Tamanho de uma String

1. Crie uma variável `$message` e atribua a ela um texto qualquer.
2. Exiba o texto armazenado na variável `$message`.
3. Use a função `strlen()` para exibir o tamanho da string armazenada em `$message`.

### Exercício 3: Contagem de Palavras

1. Use a mesma variável `$message` do exercício anterior.
2. Use a função `str_word_count()` para contar o número de palavras na string `$message`.
3. Exiba o número de palavras.

### Exercício 4: Busca de Texto Dentro de uma String

1. Crie uma variável `$searchWord` e atribua a ela uma palavra que você deseja buscar dentro da string `$message`.
2. Use a função `strpos()` para encontrar a posição da palavra dentro da string.
3. Exiba a posição da palavra encontrada ou uma mensagem indicando que a palavra não foi encontrada.

### Exercício 5: Manipulação de Strings Combinada

1. Crie uma variável `$newMessage` e atribua a ela um novo texto.
2. Exiba o texto armazenado em `$newMessage`.
3. Exiba o tamanho da string usando `strlen()`.
4. Exiba o número de palavras usando `str_word_count()`.
5. Busque uma palavra específica dentro de `$newMessage` usando `strpos()` e exiba a posição encontrada.

Estes exercícios ajudarão você a praticar a manipulação de strings em PHP, incluindo a diferenciação
