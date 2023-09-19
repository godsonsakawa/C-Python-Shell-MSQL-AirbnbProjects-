#!/usr/bin/python3
"""
List all states from a given db sorted in acsending order by id
Usage: ./0-select_states.py <mysql username> <mysql password> <database name>
"""
import MySQLdb
import sys


if __name__ == "__main__":
    db = MySQLdb.connect(host="localhost",
                         port=3306,
                         user=sys.argv[1],
                         passwd=sys.argv[2],
                         db=sys.argv[3])
    cur = db.cursor()
    cur.execute("SELECT * FROM states ORDER BY states.id ASC")
    all_states = cur.fetchall()
    for state in all_states:
        print(state)
    cur.close()
    db.close()
