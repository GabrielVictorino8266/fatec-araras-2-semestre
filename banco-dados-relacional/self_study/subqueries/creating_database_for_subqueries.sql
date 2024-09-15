-- Criando o banco de dados
CREATE DATABASE LojaOnline;
USE LojaOnline;

-- Tabela de Clientes
CREATE TABLE Clientes (
    ClienteID INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(100),
    Email VARCHAR(100),
    Cidade VARCHAR(100),
    Estado VARCHAR(100),
    DataCadastro DATE
);

-- Tabela de Produtos
CREATE TABLE Produtos (
    ProdutoID INT AUTO_INCREMENT PRIMARY KEY,
    NomeProduto VARCHAR(100),
    Categoria VARCHAR(100),
    Preco DECIMAL(10, 2),
    Estoque INT
);

-- Tabela de Pedidos
CREATE TABLE Pedidos (
    PedidoID INT AUTO_INCREMENT PRIMARY KEY,
    ClienteID INT,
    DataPedido DATE,
    ValorTotal DECIMAL(10, 2),
    FOREIGN KEY (ClienteID) REFERENCES Clientes(ClienteID)
);

-- Tabela de Detalhes dos Pedidos
CREATE TABLE DetalhesPedido (
    DetalheID INT AUTO_INCREMENT PRIMARY KEY,
    PedidoID INT,
    ProdutoID INT,
    Quantidade INT,
    PrecoUnitario DECIMAL(10, 2),
    FOREIGN KEY (PedidoID) REFERENCES Pedidos(PedidoID),
    FOREIGN KEY (ProdutoID) REFERENCES Produtos(ProdutoID)
);

-- Inserindo dados de exemplo em Clientes
INSERT INTO Clientes (Nome, Email, Cidade, Estado, DataCadastro) VALUES
('João Silva', 'joao.silva@gmail.com', 'São Paulo', 'SP', '2023-01-15'),
('Maria Santos', 'maria.santos@gmail.com', 'Rio de Janeiro', 'RJ', '2022-11-30'),
('Pedro Oliveira', 'pedro.oliveira@gmail.com', 'Curitiba', 'PR', '2023-03-10');

-- Inserindo dados de exemplo em Produtos
INSERT INTO Produtos (NomeProduto, Categoria, Preco, Estoque) VALUES
('Cadeira Gamer', 'Móveis', 599.90, 50),
('Teclado Mecânico', 'Periféricos', 299.90, 120),
('Monitor Full HD', 'Eletrônicos', 899.90, 30),
('Mouse Sem Fio', 'Periféricos', 79.90, 200);

-- Inserindo dados de exemplo em Pedidos
INSERT INTO Pedidos (ClienteID, DataPedido, ValorTotal) VALUES
(1, '2023-05-20', 1399.70),
(2, '2023-06-10', 299.90),
(3, '2023-07-15', 979.80);

-- Inserindo dados de exemplo em DetalhesPedido
INSERT INTO DetalhesPedido (PedidoID, ProdutoID, Quantidade, PrecoUnitario) VALUES
(1, 1, 2, 599.90),
(1, 4, 1, 79.90),
(2, 2, 1, 299.90),
(3, 3, 1, 899.90),
(3, 4, 1, 79.90);
