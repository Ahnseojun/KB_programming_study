-- 분류 코드별로 표시
select foodcode, avg(price) from food_truck group by foodcode;
-- > 각 코드가 의미하는 바를 알 수 없음

-- 1
-- 공통점 : 두 개의 테이블 매칭
-- view 없이 푸는 방법
select name, avgprice
from (select foodcode, avg(price) avgprice from  food_truck
group by foodcode)aa
join food_category on aa.foodcode = food_category.code;

-- view 사용
create view groupby_food_view  as 
select foodcode, avg(price) avgprice from  food_truck
group by foodcode;

select name, avgprice from food_category join groupby_food_view
on food_category.code = groupby_food_view.foodcode;

-- 1-2 평균값이 비싼 순

select name, avgprice from food_category join groupby_food_view
on food_category.code = groupby_food_view.foodcode
order by avgprice desc;

-- 1-3 평균값이 저렴한 순
select name, avgprice from food_category join groupby_food_view
on food_category.code = groupby_food_view.foodcode
order by avgprice asc;

-- 2 분류별로 가장 비싼 음식들 표시
-- 1) group by 이용해서 각 코드별 비싼음식 표시
--select foodcode, max(price) maxpirce from food_truck group by foodcode;
--create view max_food as
--select foodcode, max(price) maxpirce from food_truck group by foodcode;

-- 2) join을 이용해서 각 음식의 카테고리 명(=분류명) 표시
select distinct food_truck.name foodname, price, food_category.name categoryname
from food_truck join food_category 
on food_truck.foodcode = food_category.code;

create view food_category_truck as
select distinct food_truck.name foodname, price, food_category.name categoryname
from food_truck join food_category 
on food_truck.foodcode = food_category.code;

select * from food_category_truck;
select * from max_food;

-- 음식을 카테고리명 별로 분류
-- 그러므로 카테고리명 별로 max값을 다시 group by 함
select categoryname, max(price) maxprice from food_category_truck
group by categoryname;

drop view max_food;  -- 이전의 max_food 삭제함

-- view 만들 때 주의사항!!!! : avg / max 등 함수의 결과는 또 다른 이름으로 변경해야함
create view max_food as select categoryname, max(price)maxprice from food_category_truck
group by categoryname;

select * from max_food;
-- 1번과 2번을 join한다.

select foodname, price, max_food.categoryname from max_food join food_category_truck 
on max_food.categoryname=food_category_truck.categoryname and 
max_food.maxprice=food_category_truck.price;

-- 3 분류별로 가장 저렴한 음식
-- 1) 음식명, 카테고리명이 나오는 테이블 만들기(2번, food_category_truck)
-- 2) food_category_truck에 있는 음식을 group by해서 min값 구하기
select categoryname, min(price) minprice
from food_category_truck
group by categoryname;

create view min_food as
select categoryname, min(price) minprice
from food_category_truck
group by categoryname;

-- 3번 정답
select foodname, price, min_food.categoryname from
food_category_truck join min_food on
food_category_truck.categoryname = min_food.categoryname and
food_category_truck.price = min_food.minprice;

-- 4
select * from groupby_food_view;

select name, groupby_food_view.foodcode, avgprice
from groupby_food_view join food_category on
groupby_food_view.foodcode = food_category.code;

create view group_avg_food as
select name, groupby_food_view.foodcode, avgprice
from groupby_food_view join food_category on
groupby_food_view.foodcode = food_category.code;

select * from group_avg_food where avgprice = (select min(avgprice) from group_avg_food);

-- 5
select * from group_avg_food where avgprice = (select max(avgprice) from group_avg_food);