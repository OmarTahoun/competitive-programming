n, t = map(int, input().split())


if t == 10 and n == 1:
	print(-1)
	exit()

x = 10**(n-1)
if t == 10:
	if int(x%t) == 0 and len(str(int(x)))==n:
		print(x)
		exit()
x*=t
if int(x%t) == 0 and len(str(int(x)))==n:
		print(x)
else:
	print(-1)