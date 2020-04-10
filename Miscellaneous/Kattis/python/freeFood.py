n = int(input())

available = []
for i in range(n):
    line = map(int, raw_input().split())
    for j in range(line[0], line[1]+1):
        if j not in available:
            available.append(j)

print len(available)


