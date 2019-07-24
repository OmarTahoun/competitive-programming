n = int(input())
solds = list(map(int, input().split()))
a, b = 0, n-1
dist = abs(solds[0]-solds[n-1])
for i in range(n-1):
	if abs(solds[i]-solds[i+1]) <= dist:
		a, b = i, i+1
		dist = abs(solds[i]-solds[i+1])
print(a+1, b+1)


