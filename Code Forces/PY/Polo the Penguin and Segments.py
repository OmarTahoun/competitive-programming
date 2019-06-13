n, k = map(int, input().split())

set_count = 0
for i in range(n):
	a,b = map(int, input().split())
	set_count+= len(range(a,b+1))

if set_count%k == 0:
	print(0)
else:
	print(k-(set_count%k))