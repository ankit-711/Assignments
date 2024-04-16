use assignment;

create table salesman_data(
salesman_id int primary key,
name varchar(15) not null,
city varchar(10) not null,
commission double not null
);

insert into salesman_data values
(5001,"James Hoog","New York",0.15),
(5002,"Nail Knite","Paris",0.13),
(5005,"Pit Alex","London",0.11),
(5006,"Mc Lyon","Paris",0.14),
(5007,"Paul Adam","Rome",0.13),
(5003,"Lauson Hen","San Jose",0.12);

-- Q.18 Write a SQL statement that displays all the information about all salespeople.

-- Ans:
      select * from salesman_data;