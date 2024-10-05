/*EX0001 - Exiba a quantidade total vendida dos produtos (group by por
código do Produto) (exibir id, nome do produto e quantidade)*/

drop procedure if exists quantidade_total_vendida
*
DELIMITER $$
CREATE PROCEDURE quantidade_total_vendida()
BEGIN
    SELECT itemvenda.idproduto, SUM(quantidade), produto.descricao from produto inner join itemvenda on produto.id = itemvenda.idproduto
	 GROUP BY itemvenda.idproduto
	 GROUP ;

END $$

DELIMITER ;


call quantidade_total_vendida();

/*EX0002 - Exiba todas as vendas efetuadas (número do pedido, cliente,
total da venda)*/

DROP PROCEDURE if exists PROCEDURE_02;

delimiter $$

CREATE PROCEDURE PROCEDURE_02()
BEGIN
	SELECT itemvenda.idvenda,  cliente.nome, SUM(itemvenda.quantidade * itemvenda.precounitario) FROM itemvenda INNER JOIN venda
	 ON itemvenda.idvenda = venda.id 
	 INNER JOIN cliente on venda.idcliente = cliente.id
	 GROUP BY venda.id;
END $$

delimiter ;

CALL PROCEDURE_02();

