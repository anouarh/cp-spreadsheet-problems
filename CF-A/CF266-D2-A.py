# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 01:42:44 2020

@author: Anouar
"""

#import sys
#lines = sys.stdin.readlines()

n = int(input())
s = input()
cnt = 0

for i in range(len(s)):
    if i+1 < len(s) and s[i] == s[i+1]:
        cnt += 1

print(cnt)