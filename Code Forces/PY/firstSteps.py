n = int(input())
a = [0]
a.extend(map(int, raw_input().split()))

count  = 0
best = 0
for i in range(1, n+1):
    if a[i-1] <= a[i]:
        count += 1
    else:
        count = 1
    best = max(best, count)

print best


