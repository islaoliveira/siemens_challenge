SELECT name FROM (
    SELECT name FROM dogs
    UNION ALL
    SELECT name FROM cats) as sql
GROUP BY name
HAVING COUNT(*) = 1;