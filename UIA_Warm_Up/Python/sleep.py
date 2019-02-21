n,k = map(int, input().split())

values = list(map(int, input().split()))
total = sum(values[:k])

hours = total
for i in range(k,n):
    total += values[i] - values[i-k]
    hours += total

print("%.6f" % (hours/(n-k+1)))

