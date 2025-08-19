# Write your MySQL query statement below

select w1.id
from Weather w2
Join Weather w1 on w1.recordDate =w2.recordDate + INTERVAL 1 day
where w1.temperature > w2.temperature 