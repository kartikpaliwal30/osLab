#!/bin/bash
read file
if [[ -x "$file" ]]
then
	echo "File '$file' is executable"
else 
	echo "File '$file' is not executable"
fi
