# Estrutura de uma função em banco de dados

Quando for necessário, no caso de uma função, seria necessário salvar os dados e retornar dados.

```sql
CREATE FUNCTION function_name [ (parameter datatype [, parameter datatype]) ]
RETURNS return_datatype

BEGIN

   declaration_section

   executable_section

END;
```
Exemplo de uma function no mysql:

```sql
DELIMITER $$
CREATE or REPLACE FUNCTION hello(s CHAR(20)) RETURNS CHAR(50)
BEGIN
    DECLARE mensagem VARCHAR(30);
    SET mensagem = CONCAT('Hello, ',s,'! ');
    if CURTIME() > "18:00:00"
        then set mensagem = CONCAT(mensagem, 'Boa Noite');
        ELSE set mensagem = CONCAT(mensagem, 'Bom dia');
    END IF;

    RETURN mensagem;
END $$
DELIMITER ;

--------------------------------------
--Função para determinar o quadrado de um numero.
DELIMITER $$
CREATE FUNCTION IF NOT EXISTS square(num INT)
RETURNS INT
BEGIN
    RETURN num * num;
END $$
DELIMITER ;

SELECT square(10);

--------------------------------------
--Função para determinar a soma de um número.
DELIMITER $$
CREATE FUNCTION IF NOT EXISTS soma(num1 INT, num2 INT)
RETURNS INT
BEGIN
    RETURN num1 + num2;
END $$
DELIMITER ;

SELECT soma(10, 9)
```


## Aplicação de Função na Prática

