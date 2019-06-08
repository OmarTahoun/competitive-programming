digs = [6,8,4,2]
n = int(input())
if n > 0:
	x = int(n%4)
	print(digs[x])
else:
	print(1)