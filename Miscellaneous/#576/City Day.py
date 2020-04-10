n, x, y = map(int, input().split())

days = list(map(int, input().split()))

for i in range(x-1, n):
	a = days[i-x:i+1]
	b = days[i:i+y+1]
	a.append(1000000001)
	b.append(1000000001)
	a = list(filter(lambda x: x >0, a))
	b = list(filter(lambda x: x >0, b))
	if days[i] == min(a) and days[i] == min(b) and days[i]>0:
		print(i+1)
		exit()