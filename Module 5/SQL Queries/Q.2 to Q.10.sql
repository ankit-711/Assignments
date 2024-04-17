use assignment;

-- Q.2 Create tables : Employee & Incentive

create table Employee(
Employee_id int primary key,
First_name varchar(10) not null,
Last_name varchar(10) not null,
Salary int not null,
Joining_date varchar(30),
Department text not null
);

insert into Employee values
(1,"John","Abraham",1000000,"01-JAN-13 12.00.00 AM","Banking"),
(2,"Michael","Clarke",800000,"01-JAN-13 12.00.00 AM","Insurance"),
(3,"Roy","Thomas",700000,"01-FEB-13 12.00.00 AM","Banking"),
(4,"Tom","Jose",600000,"01-FEB-13 12.00.00 AM","Insurance"),
(5,"Jerry","Pinto",650000,"01-FEB-13 12.00.00 AM","Insurance"),
(6,"Philip","Mathew",750000,"01-JAN-13 12.00.00 AM","Services"),
(7,"TestName1","123",650000,"01-JAN-13 12.00.00 AM","Services"),
(8,"TestName2","Lname%",600000,"01-FEB-13 12.00.00 AM","Insurance");

select * from Employee;

create table Incentive(
Employee_ref_id int,
Incentive_date varchar(15) not null,
Incentive_amount int not null,
foreign key Incentive(Employee_ref_id) references Employee(Employee_id)
);

insert into Incentive values
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(1,"01-JAN-13",4500),
(2,"01-JAN-13",3500);

select * from Incentive;

-- Q.3 Get First_Name from employee table using Tom name “Employee Name”.
-- Ans: 
       select  * from Employee where First_name="Tom";
       
-- Q.4 Get FIRST_NAME, Joining Date and Salary from employee table.
-- Ans:
       select First_name, Joining_date, Salary from Employee;
       
-- Q.5 Get all employee details from the employee table order by First_Name Ascending and Salary descending?   
-- Ans:
       select * from Employee order by First_name asc;	
       select * from Employee order by Salary desc;    
       
-- Q.6 Get employee details from employee table whose first name contains ‘J’.
-- Ans:
       select * from Employee where First_name like "J%";
       
-- Q.7-8 Get department wise maximum salary from employee table order by salary ascending? 
-- Ans: 
       select Department, max(Salary) as maxsalary from Employee group by Department order by maxsalary;
       
-- Q.9 Select first_name, incentive amount from employee and incentives table for those employees
--     who have incentives and incentive amount greater than 3000.  
-- Ans: 
       select e.First_name, i.Incentive_amount from Employee as e Inner Join Incentive as i on e.Employee_id = i.Employee_ref_id
       where Incentive_amount > 3000;
       
-- Q.10 Create After Insert trigger on Employee table which insert records inview table.
-- Ans:
       create table inview(
       Employee_id int primary key,
       First_name varchar(10) not null,
       Last_name varchar(10) not null,
       Salary int not null,
       Joining_date varchar(30),
	   Department text not null
       );
       
       create trigger copy_data
       after insert on Employee 
       for each row 
       insert into inview values
       (new.Employee_id,new.First_name,new.Last_name,
       new.Salary,new.Joining_date,new.Department);
       
       select * from inview;
       
       insert into Employee values
       (9,"salman","khan",900000,"01-JAN-13 12.00.00 AM","Marketing");