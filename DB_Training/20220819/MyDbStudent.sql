create table mydbhakgwa (
code char(3) primary key,
name varchar2(30) );

--code는 반드시 pk로
--다른 테이블이 참조하려는 컬럼은 pk로 둬야함

create table mydbstudent (
hakbeon varchar2(10),
name varchar2(60),
age int,
hakgwacode char(3),
foreign key (hakgwacode) references mydbhakgwa(code) );

--학과 데이터 먼저!!
--학과 데이터 없이 학생 데이터를 추가할 수 없음

insert into mydbhakgwa values ('001', '컴공');
insert into mydbhakgwa values ('002', '아동가족');

insert into mydbstudent values ('000000001', '이동준', 34, '001');
insert into mydbstudent values ('000000002', '이제영', 34, '002');
insert into mydbstudent values ('000000003', '김혜민', 24, '001');
insert into mydbstudent values ('000000004', '이범식', 44, '001');
insert into mydbstudent values ('000000005', '박지호', 14, '002');

select mydbstudent.name 학생명, hakbeon, mydbhakgwa.name 학과명
from mydbstudent join mydbhakgwa on mydbstudent.hakgwacode = mydbhakgwa.code;
