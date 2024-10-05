DROP PROCEDURE IF EXISTS SP_Acumulador

delimiter $$
CREATE PROCEDURE SP_Acumulador(IN limite INT UNSIGNED)
BEGIN
	DECLARE contador INT UNSIGNED DEFAULT 0;
	DECLARE soma INT DEFAULT 0;
	
	WHILE contador < limite DO
		SET contador = contador + 1;
		SET soma = soma + contador;
	END while;
	
	SELECT soma;

END $$
delimiter ;

CALL SP_Acumulador(3);



-- CODIGO 2
DROP PROCEDURE IF EXISTS SP_02;

DELIMITER $$

CREATE PROCEDURE SP_02(IN limite INT UNSIGNED)
BEGIN
    DECLARE contador INT UNSIGNED DEFAULT 0;
    DECLARE soma INT DEFAULT 0;
    
   LOOP_TESTE: LOOP
        SET contador = contador + 1;
        SET soma = soma + contador;
        
        IF contador >= limite THEN 
            LEAVE LOOP_TESTE;
        END IF;
    END LOOP;
    
    SELECT soma;

END $$

DELIMITER ;

CALL SP_02(3);