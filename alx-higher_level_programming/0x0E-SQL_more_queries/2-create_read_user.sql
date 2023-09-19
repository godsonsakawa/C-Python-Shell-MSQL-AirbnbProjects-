-- create a database hbtn_0d_2 and the user user_0d_2
-- user should only have the SELECT priviledge in the database hbtn_0d_2
-- user_0d_2 password should be set to user_0d_2pwd
-- If the database/user already exists script should not fail.
CREATE USER IF NOT EXISTS "user_0d_2"@"localhost"  IDENTIFIED BY "user_0d_2_pwd";
CREATE DATABASE IF NOT EXISTS hbtn_0d_2;
GRANT SELECT ON hbtn_0d_2.* TO "user_0d_2"@"localhost";
