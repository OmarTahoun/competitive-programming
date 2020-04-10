n, d = map(int, input().split())
hoppers = int(input())
res = []
for i in range(hoppers):
    x, y = map(int, input().split())

    if abs(x-y) <= d and x+y>=d and x+y <= 2*n-d:
        res.append("YES")
    else:
        res.append("NO")

print(*res, sep = '\n')
