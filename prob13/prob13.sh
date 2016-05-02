#!/bin/bash

for j in {3..52}
do

for i in {1..100}
do

avalue=$(head -$i prob13.txt)
avalue=$(tail -c $j) 

sum=$sum+$avalue

done

echo $sum
sum=0

done

