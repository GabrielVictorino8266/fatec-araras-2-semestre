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
/*
This stored procedure creates a temporary table and fills it with data from the 
produto table, and then selects all the data from the temporary table. 

It uses a cursor to fetch all the records from produto and then insert them into 
the temporary table. If the end of the table is reached, the continue handler is 
triggered and the loop is exited. 

After the loop, the cursor is closed and the temporary table is dropped. 

The purpose of this stored procedure is to demonstrate the use of a cursor in 
MySQL. 
*/


-- CONSTRUIR O CURSOS QUE LEIA DADOS DA TABELA CLIENTE (4 atributos)
-- E INSIRA ESSES DADOS EM UMA TABELA TEMPORÁRIA

-- O CURSOR DEVERÁ SER NOMEADO como
-- CUR_CLI

delimiter $$

DROP PROCEDURE IF EXISTS CUR_CLI;

CREATE PROCEDURE CUR_CLI()
BEGIN

	DECLARE fim INT DEFAULT FALSE;
	DECLARE texto1 VARCHAR(255);
	DECLARE texto2 VARCHAR(255);
	DECLARE texto3 VARCHAR(255);
	DECLARE texto4 VARCHAR(255);

	/*Declare a cursor*/
	DECLARE bloco CURSOR FOR
	SELECT nome, endereco, bairro, telefone
	FROM cliente;

	/*Declare the continue handler*/
	DECLARE CONTINUE handler FOR NOT FOUND set fim = TRUE;
	


	CREATE TEMPORARY TABLE teste(
		nome VARCHAR(255),
		endereco VARCHAR(255),
		bairro VARCHAR(255),
		telefone VARCHAR(255)
	);

	OPEN bloco;

	read_loop:LOOP
		FETCH bloco INTO texto1, texto2, texto3, texto4;
		IF fim THEN
			LEAVE read_loop;
		END IF;
		INSERT INTO teste
		VALUES (texto1, texto2, texto3, texto4);
	END LOOP;

	close bloco;

	select * from teste;

	DROP TEMPORARY TABLE teste;
END $$

DELIMITER ;

CALL CUR_CLI();
