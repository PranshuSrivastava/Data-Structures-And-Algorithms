# Write your MySQL query statement below
with cte as
(
    select salary, dense_rank() 
    over (order by salary desc)
    as denserank
    from employee
    limit 100
)
select (case when count(*) >= 1 then salary else NULL end) as SecondHighestSalary
from cte 
where denserank = 2;