n = int(input())
divs = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
check = [n%x for x in divs]
if 0 in check: print("YES")
else : print("NO")