# -*- coding: utf-8 -*-
"""
Created on Thu Jun 11 02:18:14 2020

@author: Anouar
"""

number_of_years = 0
limak_weight, bob_weight = map(int,input().split())

while limak_weight <= bob_weight:
    limak_weight = 3 * limak_weight
    bob_weight = 2 * bob_weight
    number_of_years += 1

print(number_of_years)
