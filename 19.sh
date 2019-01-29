#!bin/bash


for file in /home/user/*; do

  A="$(echo ${file##*/}  | cut -d'.' -f2)"
  echo $A

done
