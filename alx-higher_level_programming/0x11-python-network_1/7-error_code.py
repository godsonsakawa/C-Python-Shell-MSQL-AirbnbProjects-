#!/usr/bin/python3
""" A script that takes in a URL, sends a request to the URL
and displays the body of the response"""
import requests
import sys


if __name__ == "__main__":
    url = sys.argv[1]
    r = requests.get(url)
    if r.status_code >= 400:
        print(f"Error code: {r.status_code}")
    else:
        print(f"{r.text}")
