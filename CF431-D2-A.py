# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 02:47:57 2020

@author: Anouar
"""

arr = [int(x) for x in input().split()]
s = input()
cals = 0

for e in s:
    cals += arr[int(e)-1]

print(cals)