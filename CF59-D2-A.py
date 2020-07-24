# -*- coding: utf-8 -*-
"""
Created on Wed Jun 17 22:04:40 2020

@author: Anouar
"""

s = input()
upper_counter = 0
lower_counter = 0

for e in s:
    if e.isupper(): upper_counter += 1
    else: lower_counter += 1

if upper_counter > lower_counter: print(s.upper())
else: print(s.lower())