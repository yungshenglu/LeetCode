SELECT Email FROM (
    SELECT Email, COUNT(Email) AS NumEmail FROM Person
    GROUP BY Email
) AS Statistic
WHERE NumEmail > 1;