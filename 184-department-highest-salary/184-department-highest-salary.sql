# Write your MySQL query statement below
with cte as(
    select d.name as Department, e.name as Employee, e.salary,
    dense_rank() over (partition by d.name order by e.salary desc) as "rnk"
    from employee e
    join department d
    on e.departmentId = d.id
)
select Department, Employee, salary
from cte
where rnk = 1;