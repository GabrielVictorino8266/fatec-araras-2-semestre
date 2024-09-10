# Exercícios com Banco Empresa

1) qlSelecione o nome do cliente e o nome de seu representante

   ```sql
   /*Exercicio 01*/

   SELECT cliente.id, cliente.nome, representante.nome, representante.id FROM cliente, representante WHERE cliente.idrepresentante = representante.id;


   SELECT cliente.id, cliente.nome, representante.nome, representante.id FROM representante INNER JOIN cliente ON cliente.idrepresentante = representante.id;
   ```
2) Selecione todas as informações da ultima venda

   ```sql
   /*Exercicio 02*/

   /*Consultando a partir do maior id encontrado.*/
   SELECT *  FROM venda where id = (SELECT MAX(id) FROM venda)

   /*Consultando a partir de um order by*/
   SELECT * FROM venda ORDER BY id desc LIMIT 1
   ```
3) selecione as vendas com data de emissao menor que a maior data de emissao

   ```sql
   /*Consultando a partir do maior data encontrado e usando a logica do not.*/
   SELECT * FROM venda WHERE datemissao NOT in (SELECT MAX(datemissao) FROM venda)

   /*Consultando a partir de um outro select executado separadamente para identificação da ultima data e passando-a na mão.*/
   SELECT * FROM venda WHERE datemissao < '2019-04-04'
   ```
4) selecione o id, nome e telefone do cliente com a venda mais antiga

   ```sql
   /*selecione o id, nome e telefone do cliente com a venda mais antiga.*/
   SELECT cliente.id, cliente.nome, cliente.telefone FROM cliente INNER JOIN venda ON cliente.id = venda.idcliente WHERE venda.datemissao = (SELECT MIN(datemissao) FROM venda LIMIT 1)

   /*selecione o id, nome e telefone do cliente com a venda mais antiga.*/
   SELECT cliente.id, cliente.nome, cliente.telefone FROM cliente INNER JOIN venda ON cliente.id = venda.idcliente WHERE venda.id = 
   (SELECT MIN(id) FROM venda WHERE datemissao = (SELECT MIN(datemissao) FROM venda LIMIT 1))
   ```
5) selecione o id, data de emissão e o total(valor) de cada venda

   ```sql
   SELECT venda.id, venda.datemissao, SUM(itemvenda.quantidade * itemvenda.precounitario) AS 'Total' FROM venda INNER JOIN itemvenda ON venda.id = itemvenda.idvenda GROUP BY venda.id, venda.datemissao;
   ```
6) selecione todos os produtos que ainda não foram vendidos

   NOT IN (Select ....)

   ```sql
   SELECT * FROM produto WHERE produto.id NOT IN (SELECT itemvenda.idproduto FROM itemvenda)
   ```
7) selecione todos os produtos que foram vendidos

   IN (Select ...)

   ```sql
   SELECT * FROM produto WHERE produto.id IN (SELECT itemvenda.idproduto FROM itemvenda)
   ```
8) selecione a quantidade de vendas por cliente

   ```sql
   SELECT id, idcliente FROM venda GROUP BY idcliente



   SELECT venda.idcliente, COUNT(*) AS 'QTDE_VENDA_CLI' FROM venda WHERE venda.idcliente IN (SELECT idvenda FROM itemvenda) GROUP BY venda.idcliente
   ```
9) selecione a quantidade de vendas por forma de pagamento

   ```sql
   SELECT venda.idformapagto, COUNT(*) AS forma_pgto FROM venda GROUP BY venda.idformapagto
   ```
10) Selecione o id, idformapagto da venda e a descricao da forma

   de pagamento de todos as vendas realizadas entre 01/01/2019

   e 30/06/2019

11) Selecione todos os clientes que não possuem vendas
12) Selecione a forma de pagamento com mais vendas realizadas
13) Selecione a forma de pagamento com menos vendas realizadas
14) Selecione todas as vendas dos clientes que moram em Araras
15) Crie uma nova tabela apenas com os clientes da Baixa Mogiana
16) Atualize o salario dos empregados de acordo com o cargo
