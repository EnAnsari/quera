-- Section1
    SELECT id as order_id FROM orders WHERE status = 'warehouse' ORDER BY order_id DESC;
-- Section2
    SELECT id as customer_id, name as customer_name from customers where id not in (select customer_id from orders) order by customer_name;
-- Section3
    SELECT a.created_at AS date, format(100.0*SUM(a.can) / SUM(a.comp), 2) AS cancellation_rate FROM (SELECT created_at, CASE WHEN T.status = T.status THEN 1 ELSE 0 END comp, CASE WHEN T.status IN( 'canceled' ) THEN 1 ELSE 0 END AS can FROM orders T join customers U ON T.customer_id = U.id WHERE U.is_blocked = 0 OR U.is_blocked IS null) a GROUP BY a.created_at;

-- powered by Rahmat
-- Email: Rahmat2022a@gmail.com
-- Github: https://github.com/EnAnsari
-- question link: https://quera.org/problemset/83360/