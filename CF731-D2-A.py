# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 15:35:52 2020

@author: Anouar
"""

alpha = "abcdefghijklmnopqrstuvwxyz"
l = len(alpha)
s = input()
k = 0
rot = 0

for c in s:
    index_of_c = alpha.index(c)
    rot += min(abs(index_of_c-k),l-abs(index_of_c-k))
    k = index_of_c
print(rot)
