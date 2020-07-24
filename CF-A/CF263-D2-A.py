# -*- coding: utf-8 -*-
"""
Created on Fri Jun 12 20:51:36 2020

@author: Anouar
"""

arr_matrix = []
number_of_min_swaps = 0

for e in range(5):
    arr_matrix.append([int(x) for x in input().split()])
    
for j in range(len(arr_matrix)):
    for i in range(len(arr_matrix[j])):
        if arr_matrix[j][i] == 1:
            number_of_min_swaps += abs(2-i)
            if not j == 2:
                number_of_min_swaps += abs(2-j)
            
print(number_of_min_swaps)