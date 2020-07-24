# -*- coding: utf-8 -*-
"""
Created on Sat Jun  6 23:19:32 2020

@author: Anouar
"""

anton_wins = 0
danik_wins = 0

number_of_games_played = int(input())
games_string = input()

for e in games_string:
    if e == "A":
        anton_wins += 1
    else: danik_wins += 1

if anton_wins > danik_wins:
    print("Anton")
elif anton_wins < danik_wins:
    print("Danik")
else: print("Friendship")