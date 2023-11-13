/*SQL - Linguagem (Mãe) Estruturada de Dados: DDL e DML*/

/*DDL - Linguagem de Definição de Dados*/

/*CREATE, DROP, ALTER TABLE*/

create database IFCE;
use IFCE;

drop table alunos;

create table alunos ( 
matricula int,
Nome varchar(40),
data_nasc datetime

);

desc alunos; alter table alunos add column sexo char(1);

/* DML - LINGUAGEM DE MANIPULAÇÃO DOS DADOS:
INSERT ---> INSERIR DADOS
DELETE ---> DELETAR DADOS
UPDATE ---> ATUALIZAR DADOS
SELECT ---> CONSULTAR DADOS (DQL)

*/

insert into alunos (matricula, nome, data_nasc, sexo)
values (1000, 'Robert Silva','2003-11-20', 'M');

select * from alunos; /* o '*' vai fazer ele retornar todo o banco de dados */
select nome,sexo from alunos;   /* dessa forma ele vai retornar apenas o 'nome' e 'sexo' */

insert into alunos 
values (2000,'Maria Eduarda', '2007-07-25','f');

insert into alunos (matricula, nome, data_nasc)
values (3000,'João Gabriel', '2008-08-23');

select nome,sexo from alunos
where sexo = 'M'
or sexo is null;

select * from alunos
where matricula = 3000;

update alunos set sexo = 'M'
where matricula = 3000;

delete from alunos where nome = 'Robert Silva' and sexo = 'M' and matricula = '1000' and data_nasc = '0000-00-00';

delete from ALUNOS 
where matricula = 1000;  /* forma mais rápida de excluir uma coluna inteira */

SET sql_safe_updates = 0;  /* comando para desativar os safe updates para utilização do DELETE e UPDATE */





