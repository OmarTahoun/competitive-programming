import math
n = int(input())
total = sum(list(map(int, input().split())))
x = total/ (n-1)
x = math.ceil(x)
print(x)