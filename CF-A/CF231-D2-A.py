# -*- coding: utf-8 -*-
"""
Created on Fri Jun 12 20:33:26 2020

@author: Anouar
"""

number_of_problems = int(input())
certainty_arr = []
problems_to_write = 0
should_we_write_it = 0

for e in range(number_of_problems):
    certainty_arr.append([int(x) for x in input().split()])

for arr in certainty_arr:
    for e in arr:
        if e == 1:
            should_we_write_it += 1
    if should_we_write_it >= 2:
        problems_to_write += 1
    should_we_write_it = 0
    
print(problems_to_write)