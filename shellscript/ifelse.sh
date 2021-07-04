#!/bin/bash

number1=5
number2=7
number3=5

 if [ $number1 -eq $number1 ]; then
	 echo "Number1 is equals to Number1"
	 if [ $number1 -eq $number3 ]; then
	      echo "Number1 is equals to number3"
	 else
		 echo "number1 is not equals to number3 & number2"
 	fi
	 
else
	echo "Numbers are not equal"
fi
