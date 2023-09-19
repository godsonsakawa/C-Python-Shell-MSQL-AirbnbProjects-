#!/bin/bash
# Script that makes a reqst to 0.0.0:5000/catch_me and triggers a respnse You got me! from the server
curl -sLX PUT -d "gender=male" -H "Origin: Africa" 0.0.0.0:5000/catch_me
