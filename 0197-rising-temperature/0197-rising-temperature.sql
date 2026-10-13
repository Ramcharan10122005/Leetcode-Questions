# Write your MySQL query statement below
select b.id
from weather as a
join weather as b
on datediff(b.recorddate,a.recorddate)=1 and b.temperature>a.temperature