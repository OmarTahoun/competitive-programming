import math
n, w, h = raw_input().split(' ')
n, w, h = int(n), int(w), int(h)
d = math.sqrt(w ** 2 + h ** 2)
res = []
for i in range(n):
    l = int(input())
    if l <= w or l<=h or l<=d:
        res.append('DA')
    else:
        res.append('NE')

for i in res:
    print i


