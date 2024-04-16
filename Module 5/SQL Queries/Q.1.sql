use assignment;

create table Student(
Rollno int primary key,
Name text not null,
Branch text not null
);

insert into Student values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and Com");

select * from Student;

create table Exam(
Rollno int not null,
S_code varchar(10) not null,
Marks int not null,
P_code text not null,
foreign key Exam(Rollno) references Student(Rollno)
);

insert into Exam values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");

select * from Exam;
