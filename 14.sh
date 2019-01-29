#!bin/bash

if [ $# -eq 0 ]
then
 echo " Arguments Missing "
 exit 1
fi

cat $1>>$2
