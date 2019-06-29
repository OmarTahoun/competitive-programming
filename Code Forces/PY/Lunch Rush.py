n, k = map(int, input().split())

times = []
for i in range(n):
	f, t = map(int, input().split())
	if t>k:
		times.append(f-(t-k))
	else:
		times.append(f)

print(max(times))