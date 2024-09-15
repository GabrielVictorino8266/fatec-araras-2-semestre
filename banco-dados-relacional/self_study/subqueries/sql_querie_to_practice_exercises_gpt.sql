/*Encontre os clientes que fizeram pedidos cujo valor total é superior a R$ 1.000,:*/
select Nome, Email from clientes where ClienteID in (
						select ClienteID from pedidos where ValorTotal > 1000
);

/*Liste os produtos que foram comprados em algum pedido feito por 'João Silva':*/
select prod.ProdutoID, prod.NomeProduto
from produtos prod
where prod.ProdutoID in (
				select dp.ProdutoID
                from detalhespedido dp
                where dp.PedidoID in (
						select PedidoID
                        from pedidos
                        where ClienteID = 1
                )
)
