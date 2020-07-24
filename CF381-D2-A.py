# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 00:43:08 2020

@author: Anouar

Two pointer

"""

n = int(input())
arr = [int(x) for x in input().split()]

l = 0
r = n - 1

sereja = 0
dima = 0

turn = True

while(l <= r):
    if arr[l] >= arr[r]:
        if turn:
            sereja += arr[l]
        else: dima += arr[l]
        l += 1
    elif arr[l] < arr[r]:
        if turn:
            sereja += arr[r]
        else: dima += arr[r]
        r -= 1
    if turn:
        turn = False
    else: turn = True
    
print(f"{sereja} {dima}")