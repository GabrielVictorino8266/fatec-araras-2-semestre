# Cursores no MYSQL

A ideia do Cursor é semelhante a um ponteiro. Ele irá executar uma consulta select e carregá-la na memória, após isso, irá rodar um loop sobre cada linha.

# O que é
Cursor é uma área de memória no banco de dados, armazenando a última instrução SQL.

> Cursores podem ser utilizados em programas armazenadas, como procedures.

Sobre o cursor:

- Não rolável -> linhas não são ignoradas, não tem como pular e não podem ser buscadas na ordem inversa.
- Somente leitura.
- Sensível - aponta para dados reais.



DROP PROCEDURE IF EXISTS SP_Cursor;
 
DELIMITER $$
CREATE PROCEDURE SP_Cursor()
BEGIN
	DECLARE fim INT DEFAULT FALSE;
	DECLARE texto VARCHAR(150);
	DECLARE texto2 VARCHAR(5);
	
	DECLARE bloco CURSOR FOR
	SELECT descricao, unidade
	FROM produto;
	
	DECLARE CONTINUE HANDLER FOR NOT FOUND SET fim = TRUE;
	
	CREATE TEMPORARY TABLE teste
	(
		descricao VARCHAR(150),
		unidade VARCHAR(50)
	);
	
	OPEN bloco;
	
	read_loop:LOOP
		FETCH bloco INTO texto, texto2;
		IF fim THEN
			LEAVE read_loop;
		END IF;
		INSERT INTO teste
		VALUES (texto, texto2);
	END LOOP;
	
	CLOSE bloco;
	
	SELECT * FROM teste;
	
	DROP TEMPORARY TABLE teste;
END $$
 
DELIMITER ;

CALL SP_Cursor();

