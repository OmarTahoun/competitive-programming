n, a, b = map(int, input().split())
total = 0
for i in range(1, n+1):
	if n-i<=b and i-1 >= a:
		total+=1
print(total)