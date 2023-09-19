#!/usr/bin/python3
"""
List all values in the states table of the db hbtn_0e_0_usa whose name matches
a given 4th argument.
Usage: ./2-my_filter_states.py <mysql username> \
        <mysql password> <database name> <state name>
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
    cur.execute("SELECT * \
            FROM states \
            WHERE BINARY name = '{}' ORDER BY id ASC".format(sys.argv[4]))
    all_states = cur.fetchall()
    for state in all_states:
        print(state)
    cur.close()
    db.close()
