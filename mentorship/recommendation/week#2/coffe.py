n, k, q = map(int, input().split())

low = 200001
high = 0
for i in range(n):
	l, r = map(int, input().split())
	low = min(l, low)
	high = max(r, high)


print(low, high)
