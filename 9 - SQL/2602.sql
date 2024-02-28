create database ex2602;

use ex2602;

CREATE TABLE Clientes (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    street VARCHAR(255) NOT NULL,
    city VARCHAR(255) NOT NULL,
    state VARCHAR(255) NOT NULL,
    credit_limit DECIMAL(10,2) NOT NULL
);

INSERT INTO Clientes () VALUES (DEFAULT, 'Pedro Augusto da Rocha', 'Rua Pedro Carlos Hoffman', 'Porto Alegre', 'RS', 700,00);
INSERT INTO Clientes () VALUES (DEFAULT, 'Antonio Carlos Mamel', 'Av. Pinheiros', 'Belo Horizonte', 'MG', 3500,50);
INSERT INTO Clientes () VALUES (DEFAULT, 'Luiza Augusta Mhor', 'Rua Salto Grande', 'Niteroi', 'RJ', 4000,00);
INSERT INTO Clientes () VALUES (DEFAULT, '	Jane Ester', 'Av 7 de setembro', 'Erechim', 'RS', 800,00);
INSERT INTO Clientes () VALUES (DEFAULT, 'Marcos Antônio dos Santos', 'Av Farrapos', 'Porto Alegre', 'RS', 4250,25;
