-- create the database hbtn_0d_usa and in it table states.
-- if db and table already exists script should not fail.
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;
USE hbtn_0d_usa;
CREATE TABLE IF NOT EXISTS states (
	id INT PRIMARY KEY NOT NULL  AUTO_INCREMENT,
	name VARCHAR(256) NOT NULL
	);
