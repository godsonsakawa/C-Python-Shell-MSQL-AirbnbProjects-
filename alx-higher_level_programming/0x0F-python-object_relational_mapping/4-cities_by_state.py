#!/usr/bin/python3
"""
List all cities from the db hbtn_0e_4_usa
Usage: ./4-cities_by_state.py <mysql usrnme> \
        <mysql passwd> <database name>
"""
import MySQLdb
import sys


if __name__ == "__main__":
    db = MySQLdb.connect(host="localhost",
                         port=3306,
                         user=sys.argv[1],
                         passwd=sys.argv[2],
                         db=sys.argv[3],)
    cur = db.cursor()
    cur.execute("SELECT cities.id, cities.name, states.name \
            FROM cities \
            INNER JOIN states \
            ON cities.state_id = states.id \
            ORDER BY cities.id ASC")
    all_states = cur.fetchall()
    for state in all_states:
        print(state)
    cur.close()
    db.close()
