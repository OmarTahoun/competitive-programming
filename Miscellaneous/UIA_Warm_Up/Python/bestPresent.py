import math
n = int(input())

results = []
for i in range(n):
    a, b = map(int, input().split())
    avail = list(range(a,b+1))
    for i in range(len(avail)):
        if avail[i]%2 != 0:
            avail[i] = 0-avail[i]
    res = sum(avail)
    results.append(res)
print (*results, sep="\n")

