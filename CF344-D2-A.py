# -*- coding: utf-8 -*-
"""
Created on Wed Jun 17 22:55:05 2020

@author: Anouar
"""

temp = ""

n = int(input())
for e in range(n):
    temp += input()

magnets_couter = 0

for i in range(1,len(temp),2):
    if i+1 < len(temp) and temp[i] == temp[i+1]:
        magnets_couter += 1

print(magnets_couter+1)