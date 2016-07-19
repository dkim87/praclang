#!/bin/bash

#echo arguments to the shell

echo $1 $2 $3 ' -> echo $1 $2 $3'

#We cna also store argumetns from bash command line in special array

args=("$@")

#echo arguments to the shell
echo ${args[0]} ${args[1]} ${args[2]} ' -> args=("$@"){ echo  ${args[0]} ${args[1]} ${args[2]} '

echo $@ '-> echo $@ '

echo Number of arguments passed: $# ' -> echo Number of arguments passed: $#'

echo $0
