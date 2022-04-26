--
-- @lc app=leetcode id=1581 lang=mysql
--
-- [1581] Customer Who Visited but Did Not Make Any Transactions
--

-- @lc code=start
# Write your MySQL query statement below
select distinct customer_id,
count(V.visit_id) as count_no_trans
from Visits V
left join Transactions T
on V.visit_id = T.visit_id
where T.visit_id is null
group by customer_id
-- @lc code=end

