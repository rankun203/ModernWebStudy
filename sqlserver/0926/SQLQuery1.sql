#1
create database teachingDataA
on primary
(
	name='teachingDataA_1',
	filename='D:\teaching management\teachingdata1.mdf'
)
log on
(
	name='teachingDataA_2',
	filename='D:\teaching management\teachingdata2.ldf'
);

use ClassTestI;

use master;


#2
ALTER DATABASE teachingDataA
MODIFY FILE 
( 
  NAME = N'teachingDataA_1',
  FILEGROWTH = 2
);

alter database teachingDataA
add file
(
	name = 'teachingDataA_3',
	filename = 'D:\teaching management\teachingdata1.ndf',
	filegrowth = 2
);

#3
create database teachingDataB
on primary
(
	name='teachingDataB_1',
	filename='D:\teaching management\teachingdatab1.mdf'
)
log on
(
	name='teachingDataB_2',
	filename='D:\teaching management\teachingdatab2.ldf'
);

alter database teachingDataB
modify file
(
	name='teachingDataB_1',
	filegrowth=2
);
alter database teachingDataB
add file
(
	name='teachingDataB_3',
	filename='D:\teaching management\teachingDataA3.ndf',
	filegrowth=2
);


#4

#5
use teachingDataA;
create table course
(
	id int primary key identity,
	name varchar(255)
);
insert into course values ('CourseA');
insert into course values ('CourseB');


#6

#7
sp_detach_db teachingDataB , true
