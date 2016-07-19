#!/bin/bash

#Declare array with 4 elements

ARRAY=( 'Debian Linux' 'Redhat Linux' Ubuntu Linux)
# get number of elements in the array
Elements=${#ARRAY[@]}

#echo each element in array

#for loop

for i in {0..(($Element))}
do
	echo ${ARRAY[${i}]}
done
