# Subconsulta - Coluna

A subconsulta, além de ser entendida como condição para o select principal, também é possível passar ela como coluna que seria um atributo para o select principal.

### Exemplo:

```sql
SELECT c.nome, (SELECT COUNT(*)
					FROM venda v
					WHERE v.idcliente = c.id) AS compras
FROM cliente c
```

### Exemplo2

```sql
SELECT v.id, v.idcliente, f.descricao, 
	(SELECT COUNT(v2.id)
	FROM venda v2
	WHERE v.idformapagto = v2.idformapagto)
FROM venda v, formapagto f
WHERE v.idformapagto = f.id

```

### Exemplo3

```sql
SELECT f.descricao, (SELECT COUNT(*)
							FROM venda v
							WHERE v.idformapagto = f.id)
FROM formapagto f					
```



## Exemplo 4

```sql
SELECT v.id, (SELECT COUNT(*) FROM vendaparcela vp
WHERE vp.idvenda = v.id
AND vp.datapagto IS NULL) AS parcelas_abertas
FROM venda v
```
