# -*- coding: utf-8 -*-
"""
Created on Sat Jun 20 20:32:51 2020
Problem Name: Games
https://codeforces.com/contest/268/problem/A
@author: Anouar

Much faster solution:

n = int( input().split()[0] )
answer = 0
h = []
a = []
for i in range( 0, n ):
	team = input().split()
	h.append( int( team[0] ) )
	a.append( int( team[1] ) )
for i in range( 0, n ):
	for j in range( 0, n ):
		if i == j:
			continue
		if h[i] == a[j]:
			answer += 1
print( answer )

"""



games, home, away = [], [], [] 
res = 0
 
n = int(input())
for e in range(n):
    pair = [int(x) for x in input().split()]
    for e in pair:
        games.append(e)
 
for i in range(0,len(games),2):
    home.append(games[i])
 
for i in range(1,len(games),2):
    away.append(games[i])

for i in range(len(home)):
    for j in range(len(away)):
        if home[i] == away[j]:
            res += 1

print(res)