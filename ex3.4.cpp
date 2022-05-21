#!/bin/bash
i = 1
for day in Mon Tue Web Thu Fri Sat Sun
do 
	each -n " Day $((i+1)) : $day "
	if [ $i -eq 7 -0 $i -eq 8 ]
	 then
		echo "Weekend"
		continue
	else
		echo "Weekday"
	fi
done
