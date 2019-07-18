n, m = map(int, input().split())
count = 0

for i in range(n+1):
	for j in range(m+1):
		a = (i**2) + j
		b = i + (j**2)

		if a == n and b == m:
			count+=1


print(count)