line = list(map(int,raw_input().split()))
a, b = min(line[0], line[1]), max(line[0], line[1])

res = range(a+1, b+2)
for r in res:
    print r
