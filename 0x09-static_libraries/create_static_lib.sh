#!/bin/bash
ls *.c |
while read file
do
out=$(echo $file | cut -d "." -f1)
out="${out}"'.o'
echo "${out}"
gcc -fno-pie -g -O -c "${file}" -o "${out}"
ar rc liball.a "${out}"
done
