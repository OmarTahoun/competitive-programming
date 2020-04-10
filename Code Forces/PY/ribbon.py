sol = 1
n , a, b, c = map(int, input().split())
for i in range(n):
	for j in range(n):
		k = n - (i*a) - (j*b)
		if (k>=0 and k%c == 0):
			k //= c
			sol = max(sol, i+j+k)

print(sol)
