# Write your MySQL query statement below
select employee_id 
from Employees
where (employee_id not in (select employee_id from Salaries) or name is null)
union 
select employee_id 
from Salaries
where (employee_id not in (select employee_id from Employees ) or salary is null)
order by employee_id