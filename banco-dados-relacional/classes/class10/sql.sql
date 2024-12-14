DELIMITER $$

CREATE PROCEDURE SP_ATUALIZA_ESTOQUE(
    IN id_produto INT, IN qtde FLOAT, IN operacao CHAR(1)
)
BEGIN
    if operacao = 'E' then
        UPDATE produto
        SET estoque = estoque + qtde
        where id = id_produto;
    ELSEIF operacao = 'S' then
        UPDATE produto
        SET estoque = estoque - qtde
        where id = id_produto;
    end if;
END $$
DELIMITER ;






--VOLTA DE ESTOQUE (CANCELAMENTO)

DELIMITER $$
CREATE OR REPLACE TRIGGER TRG_ITEMVENDA_DELETE
    BEFORE DELETE ON ITEMVENDA
    FOR EACH ROW
    BEGIN
        CALL SP_ATUALIZA_ESTOQUE(OLD.id_produto, OLD.qtde, 'E');

END $$
DELIMITER ;


-- SAIDA DE ESTOQUE (VENDA)
DELIMITER $$
CREATE OR REPLACE TRIGGER TRG_ITEMVENDA_INSERT
    AFTER INSERT ON ITEMVENDA
    FOR EACH ROW
    BEGIN
        CALL SP_ATUALIZA_ESTOQUE(NEW.id_produto, NEW.qtde, 'S');

END $$
DELIMITER ;
