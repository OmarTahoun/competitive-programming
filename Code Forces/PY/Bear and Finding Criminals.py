n, a = map(int, input().split())
a-=1
cities = list(map(int, input().split()))
total = 0
for i in range(n):
	dist = abs(a-i)
	if dist == 0 and cities[a] == 1:
		total+=1
	elif a+dist <= n-1 and a-dist>=0:
		if cities[a+dist] == 1 and cities[a-dist] == 1:
			total+=2
			cities[a+dist] = 0
			cities[a-dist] = 0
	else:
		if a-dist<0 and cities[a+dist]==1:
			total+=1
		elif a+dist>=n and cities[a-dist]==1:
			total+=1
print(total)