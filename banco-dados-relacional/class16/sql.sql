-- Concorrencia em Banco de Dados (Transações)

-- Os acessos simultâneos são entendidos em termos de transações (rotinas), acessando o mesmo registro.

-- No contexto de transação, temos:
-- COMMIT - efetiva os dados na tabela.
-- ROLLBACK - desfaz os dados na tabela.

-- Uma transação compõe apenas uma única tarefa (mas podemos ter múltiplas transações iguais).

-- Em caso de uma falha, o banco desfaz as ações até o último COMMIT realizado.

-- CARACTERÍSTICAS DE UMA TRANSAÇÃO
-- atomicidade: ou executa ou não, em caso de erro, não foi realizado inteira. Tem que ser desfeita.
-- consistência: cria novo estado válido dos dados, antes dela ser alterado.
-- isolamento: uma transação não deve ser afetada por outra transação.
-- durabilidade: os dados são registrados considerando que podem voltar.