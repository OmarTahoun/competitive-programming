import math
n = int(input())
res = []
for i in range(n):
    v, angle, x, h1, h2 = map(float, raw_input().split())
    time = x / (v*math.cos(angle*math.pi / 180.0))
    height = v*time*math.sin(angle * math.pi / 180.0) - (0.5 * 9.81 * time**2)
    if height <= h2-1 and height >= h1+1:
        res.append("Safe")
    else: res.append("Not Safe")

for line in res :
    print line
