# -*- coding: utf-8 -*-
"""
Created on Wed Jun 17 21:37:09 2020

@author: Anouar
"""

username = input()
new_username = set(username)
if len(new_username) % 2 == 0: print("CHAT WITH HER!")
else: print("IGNORE HIM!")

#perhaps faster implementation

# =============================================================================
# temp = []
# 
# for i in range(len(username)):
#     if not username[i] in temp:
#         temp.append(username[i])
# if len(temp) % 2 == 0: print("CHAT WITH HER!")
# else: print("IGNORE HIM!")
# =============================================================================

    