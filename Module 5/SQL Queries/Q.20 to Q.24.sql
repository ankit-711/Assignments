create database assignment;

create table item_mast(
PRO_ID int primary key,
PRO_NAME text not null,
PRO_PRICE decimal(6,2) not null,
PRO_COM int not null
);

insert into item_mast values
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"ZIP drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Monitor",5000.00,11),
(106,"DVD drive",900.00,12),
(107,"CD drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill Cartridge",350.00,13),
(110,"Mouse",250.00,12);

-- Q.20 From the following table, write a SQL query to select a range of
--      products whose price is in the range Rs.200 to Rs.600. Begin and end
--      values are included. Return pro_id, pro_name, pro_price, and pro_com.

-- Ans:
       select * from  item_mast where PRO_PRICE >= 200 AND PRO_PRICE <= 600
       
-- Q.21 From the following table, write a SQL query to calculate the average
--      price for a manufacturer code of 16. Return avg.

-- Ans:
       select Avg(PRO_PRICE) from item_mast where PRO_COM = 16;
      
-- Q.22 From the following table, write a SQL query to display the pro_name
--      as 'Item Name' and pro_price as 'Price in Rs.'

-- Ans:
       select PRO_NAME as "Item Name" , PRO_PRICE as "Price in Rs." from item_mast;
       
-- Q.23 From the following table, write a SQL query to find the items whose
--      prices are higher than or equal to $250. Order the result by product price in
--      descending, then product name in ascending. Return pro_name and pro_price.
   
-- Ans: 
	  select PRO_PRICE,PRO_NAME from item_mast where PRO_PRICE >= 250 order by PRO_PRICE desc, PRO_NAME asc
      
-- Q.24 From the following table, write a SQL query to calculate average
--      price of the items for each company. Return average price and company code.

-- Ans:
       select avg(PRO_PRICE), PRO_COM from item_mast group by PRO_COM;