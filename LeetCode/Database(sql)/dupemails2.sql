-- Optimized code for deleting duplicate emails from the Person table
DELETE FROM Person
WHERE id not in (
    select id from(
        select min(id) as id
        from person 
        group by email
    )as temp
);