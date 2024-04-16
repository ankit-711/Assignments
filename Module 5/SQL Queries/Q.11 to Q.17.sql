use assignment;

-- Q.11 Create table given below: Salesperson and Customer.
-- Ans:

create table SALESPERSON(
SNo int primary key,
SNAME text not null,
CITY varchar(15) not null,
COMM DOUBLE not null
);

insert into SALESPERSON values
(1001,"Peel","London",.12),
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axelrod","New York ",.1);

Select * from SALESPERSON;

Create table CUSTOMER(
CNM int primary key,
CNAME text not null,
CITY varchar(15) not null,
RATING int not null,
SNo int,
foreign key CUSTOMER(SNo) references SALESPERSON(SNo)
);

insert into CUSTOMER values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Rome",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Rome",100,1004);

select * from CUSTOMER;

-- Q.14 Names and cities of all salespeople in London with commission above 0.12 .
-- Ans:
      select SNAME, CITY from SALESPERSON where CITY = "London" AND COMM >= 0.12;
      
-- Q.15 All salespeople either in Barcelona or in London.
-- Ans:
      select * from SALESPERSON where CITY = "Barcelona" OR CITY = "London";

-- Q.16 All salespeople with commission between 0.10 and 0.12.(Boundary values should be excluded).
-- Ans:
      select * from SALESPERSON where COMM > 0.10 AND COMM < 0.12;
      
-- Q.17 All customers excluding those with rating <= 100 unless they are located in Rome.
-- Ans:
      select * from CUSTOMER where RATING > 100 OR CITY="Rome"
      