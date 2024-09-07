# Subconsulta


Consulta aninhada com uma consulta principal com o objetivo para retornar os dados essenciais para uma consulta principal. A principal ideia de uma subconsulta é consulta a partir de um subconjunto pesquisado a partir do conjunto principal.

Os principais uso de uma Subconsulta são 3:

- Como condição (where)
- Como atributo (select)
- como tabela (from)

(select dentro de select)

Exemplo de estrutura: 

```sql
SELECT NOME_COLUNAFROM TABELA
WHERE NOME_COLUNA = (SELECT NOME_COLUNA
		     FROM 
		     WHERE CONDICOES)
```

A ordem de resolução é da querie mais interna para a consulta principal (que seria a mais externa.).


### Analisando o output de uma subconsulta

Tome como exemplo se quisermos procurar um id porém a subconsulta retorna um conjunto de informações. Para a comparação ocorrer quando recebermos um conjunto de dados:


#### Usando o sinal de igual =

Se formos trabalhar com o retorno de apenas uma linha ou dado, então sim, podemos criar uma subconsulta com  a consulta principal comparando seu valor por meio de = , caso contrário, devemos ir para o próximo:

---

#### Usando o operador do tipo IN

Para usar o operador IN, devemos esperar receber algumas linhas, neste caso isto representa um conjunto de valores.


#### Usando o Between

No caso específico do between não pode fazer da seguinte forma:

Between na consulta principal

```SQL
SELECT x FROM A 
WHERE A > 1 
AND A < 10
```

Between - Exemplo de uso não permitido

```sql
SELECT * FROM A WHERE A BETWEEN SUBCONSULTA1 AND SUBCONSULTA2
```


### Outros usos para a Subconsulta

podemos usar uma subconsulta para inserir dados em uma tabela, bem como, promover um delete automático também.




## Exercícios sobre subconsulta:


##### Ex2

Trazendo veterinarios que realizaram consultas na espécie gato do sexo feminino e depois masculino.

```sql
SELECT a.id_veterinario , v.nome FROM consultas a, veterinarios v WHERE v.id_veterinario = a.id_veterinario AND a.id_pet IN (
	SELECT b.id_pet
	FROM pets b
	WHERE b.especie = "Gato"
	AND b.sexo = "F"
);

/*BUSCANDO O CASO DE SEXO MASCULINO*/

SELECT a.id_veterinario , v.nome FROM consultas a, veterinarios v WHERE v.id_veterinario = a.id_veterinario AND a.id_pet NOT IN (
	SELECT b.id_pet
	FROM pets b
	WHERE b.especie = "Gato"
	AND b.sexo = "F"
);
```


##### Ex3

Inserindo os valores para o exercício: 

```sql
INSERT INTO agendamentos(id_pet, id_veterinario, data_agendamento, hora_agendamento, status_agendamento) VALUES
(1,1, '2024-09-02', '10:00:00',"consutado");

INSERT INTO agendamentos(id_pet, id_veterinario, data_agendamento, hora_agendamento, status_agendamento) VALUES
(2,2, '2024-09-02', '11:00:00', "consultado");

INSERT INTO consultas(id_pet, id_veterinario, data_consulta)
(SELECT id_pet, id_veterinario, CURRENT_DATE
FROM agendamentos
WHERE status_agendamento = 'consultado'
)

/*Apagando do agendamento todos que tiveram o status consultado.*/
DELETE FROM agendamentos
WHERE id_agendamento IN (
SELECT b.id_agendamento
FROM agendamentos b 
WHERE b.status_agendamento = "consultado")

```
