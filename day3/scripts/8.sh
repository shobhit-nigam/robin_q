#!/bin/bash
# this will be a comment

varx=30
echo $varx
read varx

if [ "$varx" -ge 100 ]
then
	echo "hundred"
else
	echo "less than hundred"
fi
