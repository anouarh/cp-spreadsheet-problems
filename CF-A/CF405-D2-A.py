# -*- coding: utf-8 -*-
"""
Created on Tue Jun 16 18:55:03 2020

@author: Anouar
"""

number_of_columns = int(input())
box = [int(x) for x in input().split()]

box.sort()

for i in range(len(box)):
    print(box[i], end =" ")
