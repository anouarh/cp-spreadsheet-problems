# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 02:21:01 2020

@author: Anouar
"""

n = int(input())
arr = [int(x) for x in input().split()]

untreated = 0
recruits = 0

for i in range(n):
    if recruits <= 0 and arr[i] == -1:
        untreated += 1
    else: recruits += arr[i]
        
print(untreated)
