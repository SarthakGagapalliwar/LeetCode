# Write your MySQL query statement below


select a1.name   from
Employee as a1
join Employee a2 

ON a1.id =a2.managerID
Group by a2.managerID
having count(*)>=5