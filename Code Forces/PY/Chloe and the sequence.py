n, k = map(int, input().split())
cur = 1
while k%2 == 0:
	k //= 2
	cur += 1
print(cur)