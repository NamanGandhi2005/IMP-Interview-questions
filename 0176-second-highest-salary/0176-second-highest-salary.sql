# Write your MySQL query statement below
-- select(select distinct salary from Employee order by salary desc limit 1,1)as SecondHighestSalary;
 
-- select(select max(salary) from Employee where salary not in(select max(salary) from Employee))as SecondHighestSalary;

select(select distinct salary from Employee as e1
where 2=(select count(distinct e2.salary) from Employee as e2 where e2.salary >=e1.salary))as SecondHighestSalary;