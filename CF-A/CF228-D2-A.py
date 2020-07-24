# -*- coding: utf-8 -*-
"""
Created on Wed Jun 24 02:25:54 2020

@author: Anouar
"""

colors = [int(x) for x in input().split()]
colors_set = set(colors)
res = len(colors) - len(colors_set)
print(res)