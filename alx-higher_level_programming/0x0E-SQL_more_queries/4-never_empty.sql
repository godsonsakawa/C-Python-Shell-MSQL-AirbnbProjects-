-- creates a table id_not_null
-- if table exists script should not fail.
CREATE TABLE IF NOT EXISTS id_not_null (
	id INT DEFAULT 1,
	name VARCHAR(256)
	);
