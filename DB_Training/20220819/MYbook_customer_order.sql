create table mykbmajor2 (
name varchar2(30) not null,
code char(3) primary key,
regDate timestamp default sysdate); --timestamp 연월일시분초

insert into mykbmajor2(name, code) values ('정보기술개발', '001');
select * from mykbmajor2;

insert into mykbmajor2 (name, code) values('빅데이터AI', '002');

create table mykbstudent2 (
name varchar2(20),
age int,
hakbeon char(10),
hakgwa_code char(3),
regDate date default sysdate );

insert into mykbstudent2 values ('안서준', '27', '2022081900', '001', sysdate);
insert into mykbstudent2 values ('오세룡', '25', '2022081911', '001', sysdate);
insert into mykbstudent2 values ('노민영', '20', '2022081912', '002', sysdate);

select * from mykbstudent2;

alter table mykbstudent2 add constraint fk_fk primary key (hakbeon);

insert into mykbmajor2 values ('피지컬갤러리',  '003', sysdate);
select * from mykbmajor2;

insert into mykbstudent2 values ('김계란', '30', '2022081915', '003', sysdate);
insert into mykbstudent2 values ('오두부', '40', '2022081918', '003', sysdate);
insert into mykbstudent2 values ('조부부', '50', '2022081920', '003', sysdate);
insert into mykbstudent2 values ('박나무', '280', '2022081922', '001', sysdate);
insert into mykbstudent2 values ('배추차', '45', '2022081924', '002', sysdate);

select * from mykbstudent2;

select mykbstudent2.name, hakbeon, mykbmajor2.name
from mykbstudent2 join mykbmajor2 on
mykbstudent2.hakgwacode = mykbmajor2.code;