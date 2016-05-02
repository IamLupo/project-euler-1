#!/usr/bin/python3

#proutsalut is everywhere

import math

def numbr(pos):
    for i in range(1,pos*10):
        if(pos<((20*i)-11)):
            result = i
            return result

print(numbr(1))
print(numbr(10))
print(numbr(100))
print(numbr(1000))
print(numbr(10000))
print(numbr(100000))
print(numbr(1000000))


