import math
n = float(input())
res = math.ceil(n/2)
if n % 2 !=0:
    res = 0-res
print int(res)

