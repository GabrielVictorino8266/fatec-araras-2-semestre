CREATE VIEW VW_CONSULTAPRODUTOS AS 
SELECT p.descricao, p.precovenda, p.estoque
FROM produto p
ORDER BY p.descricao;

SELECT a.descricao
from VW_CONSULTAPRODUTOS a
WHERE a.descricao = "TESTE"




CREATE VIEW VW_CONSULTAVENDAS AS 
SELECT v.id, v.idcliente, v.datemissao, i.quantidade
from venda v, itemvenda i
where i.idvenda = v.id


select * from VW_CONSULTAVENDAS;




ALTER VIEW vw_consultaprodutos as 
select p.id, p.descricao, p.precovenda, p.estoque
from produto precovenda
order by p.descricao

create view vw_consultavenda as 
select v.id, v.idcliente, v.datemissao, i.quantidade, i.precounitario, i.id_produto
from venda v, itemvenda i
where i.idvenda = v.id