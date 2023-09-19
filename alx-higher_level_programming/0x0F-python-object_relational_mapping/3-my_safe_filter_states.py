#!/usr/bin/python3
"""
List all values in the states table of the db hbtn_0e_0_usa whose name matches
a given 4th argument.
Usage: ./3-my_safe_filter_states.py <mysql usrnme> \
        <mysql passwd> <db name> <state nme>
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
    cur.execute("SELECT * FROM states ORDER BY id ASC")
    all_states = cur.fetchall()
    for state in all_states:
        if state[1] == sys.argv[4]:
            print(state)
    cur.close()
    db.close()
