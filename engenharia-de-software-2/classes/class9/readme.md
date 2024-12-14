# Introdução a teste de software

Bug
    Primeiro report de um bug em computador, o qual ocorreu em 1947, do Harvard Mark 1.

- Defeito - resultado de um erro no código ou documento
- Erro - engano cometido
- Falha - resultado ou manifestação de um ou mais defeitos

## Qualidade
A qualidade de software é subjetivo, sendo no contexto de software, associado a:
 - clientes.
 - usuários.
 - envolvidos com o projeto de software.

Ela caracteriza o grau de satisfação do cliente.
A responsabilidade é de todos os envolvidos no projeto.
Desde o início do planejamento do projeto, deve ser pensada.

### Defeitos no desenvolvimento
Originalmente, são humanos e principalmente gerados a partir da comunicação e transmissão de informações.
    - 10 defeitos a cada 1000 linhas de código.
    - em partes do código em que raramente são executados, os defeitos são encontrados.

### Objetivos do teste

Dados de entrada ------ SISTEMA ------- Resultados de saíde do teste
        -> entrada com                          ->saídas que avaliam as anomalias
        comportamento alterado

## Verificação e Validação

Validação - assegura a compatibilidade com os requisitos do sistema.
Verificação - assegura consistência, completude, correção de cada fase do produto.

## Técnicas

Análise - técnicas ou modelos matemáticos, entre outros, determinam se o artefato está conforme requisitos. 
Demonstração - exame visual do produto software (demos) se está em conformidade.
Inspeção - examinação visual de um artefato não executável, avaliando-o conforme com os requisitos. (não identifica a utilidade).
Teste - é a simulação do artefato com entrada e pré-condições conhecidas.


## Resumo

Engano
    |_> Defeito
            |_>Erro
                |_>Falha


## Técnicas de teste
Caixa preta
    - sem acesso ao código, apenas se insere dados de entrada e análise dos dados de saída.

Caixa branca
    - a equipe de teste tem acesso ao codigo fonte do sistema.
    - teste a partir do ponto de vista da implementação.

Grafo de fluxo de controle

Depuração
    Executar ou percorrer o código até entender o defeito.