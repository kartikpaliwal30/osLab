#!/bin/bash
hour = $( date | cut -c 23-24)
if [ $hour -ge 0 -a $hour -le 11 ]
then 
	echo "Good Morning"
elif
	[[ $hour -le 17 ]]
then 
	echo "Good Afternoon"
else
	echo "Good Evening"
fi
