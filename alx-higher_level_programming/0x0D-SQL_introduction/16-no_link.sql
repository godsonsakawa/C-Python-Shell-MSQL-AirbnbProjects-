-- Lists all the records of second_table
-- Don't list rows without a name.
-- Records should be litsed in descending score order.
SELECT score,name FROM second_table WHERE name IS NOT NULL
ORDER BY score DESC;
