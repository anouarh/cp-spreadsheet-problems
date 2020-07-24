# -*- coding: utf-8 -*-
"""
Created on Wed Jun 17 18:56:10 2020

@author: Anouar
"""

result = 0
string1 = input().lower()
string2 = input().lower()

if string1 < string2:
    result += -1
elif string1 > string2:
    result += 1
else: result = 0

print(result)
