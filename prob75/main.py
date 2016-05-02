#!/usr/bin/env python3
from fractions import gcd
#L = 2*k*m*(m+n)

limit = 10

i = 1

array = {}

while i in range(1,limit):
    j = 1
    while j in range(1,limit):
        n = i-j
        m = j
        k = 1
        if(n > 0):
            if(m > n):
                gcdcheck = gcd(m,n)
                if(gcdcheck == 1):
                    while k in range (1, limit):
                        value = 2*k*m*(m+n)
                        array[((i-1)/2)] = value
                        k+=1
        j += 1
    i += 2   
print(array)
