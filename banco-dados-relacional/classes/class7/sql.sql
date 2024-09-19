-- SELECT FROM SELECT
-- 
--ATRIBUTOS DERIVADOS SÃO ATRIBUTOS CALCULADOS A PARTIR DE OUTROS ATRIBUTOS (COLUNAS) EM BANCO DE DADOS


-- OPERADORES
    -- IN, NOT IN, EXISTS, NOT EXISTS


-- VISUALIZAR DESCRICAO E ESTOQUE DE PRODUTOS QUE JA FORAM VENDIDOS
select a.descricao, a.estoque
from produto a 
where id IN (
    select b.idproduto
    from itemvenda b
)

-- VISUALIZAR DESCRICAO E ESTOQUE DE PRODUTOS QUE NÃO FORAM VENDIDOS
select a.descricao, a.estoque
from produto a 
where id NOT IN (
    select b.idproduto
    from itemvenda b
)


--USANDO O CASE NO SELECT



-----------------------------------------STORAGE PROCEDURES---------------------------------------------
/*
UMA PROCEDURE SERVE PARA OTIMIZAR A PERFORMANCE DE UM BANCO DE DADOS
OTIMIZANDO O USO DA REDE E NA LEITURA DO CÓDIGO SQL.
O CÓDIGO É ARMAZENADO NO PRÓPRIO BANCO DE DADOS (SERVIDOR RESPECTIVO)


ALGUMAS DESVANTAGENS:
    - maior conhecimento da sintaxe do sql.
    - controlar o acesso ao sistema.

*/
--|estrutura básica

DELIMITER $$

CREATE PROCEDURE nome_da_procedure(IN parametro1 INT, OUT resultado INT)
BEGIN
    -- Declarações e lógica aqui
    SELECT COUNT(*) INTO resultado
    FROM funcionarios
    WHERE departamento_id = parametro1;
END $$

DELIMITER ;

/**********Entendendo o código
DELIMITER $$ -> aponta que o fim do bloco a ser usado, é o $$, que termina no END (alteração de estado temporariamente)
    begin


    end 
DELIMITER ; -> este segundo delimiter define que novamente o fim de um bloco é o ;
*/

--SEGURANCA, PODEMOS USAR O DROP PROCEDURE PARA EVITAR SUBSTITUIR UMA PROCEDURE JA CRIADA.
    -- A PROCEDURE NÃO FOI FEITA PRA RETORNAR DADOS, APENAS EXECUTAR UM PROCEDIMENTO SEM RETORNO.


--PARAMETROS
    -- in, out, intout


-- RETORNA QTDE DE REGISTROS DE ACORDO COM PARAMETROS

DROP PROCEDURE IF EXISTS SP_Seleciona_Produtos;
DELIMITER $$
CREATE PROCEDURE SP_Seleciona_Produtos(IN qtde INT)
BEGIN
    select descricao from produto limit qtde;
END $$
DELIMITER ;

-- Declarando variaveis
DROP PROCEDURE IF EXISTS SP_Seleciona_Produtos;
DELIMITER $$
CREATE PROCEDURE SP_Seleciona_Produtos(IN qtde INT)
BEGIN
    declare a INT; 
    set a = 10;

    select descricao from produto limit qtde;
END $$

CALL SP_Seleciona_Produtos(3);

-- USANDO O PARAMETRO DE SAIDA
drop procedure if exists SP_Verifica_Vendas;
DELIMITER $$
CREATE PROCEDURE SP_Verifica_Vendas(OUT qtde INT)
BEGIN
    select count(*) into qtde from venda;
END $$
DELIMITER ;

call SP_Verifica_Vendas(@qtde);

SELECT @qtde AS total

--USANDO PARAMETRO DE ENTRADA E SAIDA

DELIMITER $$
CREATE PROCEDURE SP_Quadrado(INOUT numero INT)
BEGIN
    SET numero = numero * numero;
END $$
DELIMITER ;

set @numero = 8;

call SP_Quadrado(@numero);

select @numero;

--multiplos parametros
delimiter $$
create procedure SP_Teste(IN a FLOAT, IN b FLOAT)
begin
    select a * b;
end $$
delimiter ;

call SP_teste(10,10);