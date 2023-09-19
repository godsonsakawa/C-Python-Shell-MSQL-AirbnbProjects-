-- List all cities of califonia in the hbtn_0d_usa db
SELECT id, name FROM cities WHERE state_id = (
	SELECT id FROM states WHERE name = "california" ); 
