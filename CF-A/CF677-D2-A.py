# http://codeforces.com/contest/677/problem/A
# CF677-D2-A.py

# =============================================================================
# much better solution from https://codeforces.com/contest/677/status
#
# n,h=map(int,input().split())
# arr=[int(x) for x in input().split()]
# count=0
# for ele in arr:
#     if ele<=h:
#       count+=1
#     else:
#       count+=2
# print(count)
# =============================================================================

def minimum_road_width(friends_array, fence_height):
    min_road_width = 0
    for i in range(len(friends_array)):
        if friends_array[i] <= fence_height: min_road_width += 1
        else: min_road_width += 2
    return min_road_width


number_of_friends, fence_height = map(int,input().split())
friends_array = [int(x) for x in input().split()]
print(minimum_road_width(friends_array, fence_height))
