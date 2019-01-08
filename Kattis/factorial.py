import math
n = int(input())
res = []
for i in range(n):
    x = int(input())
    fac = math.factorial(x)
    res.append(fac%10)

print (*res, sep='\n')


