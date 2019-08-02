k, d = map(int, input().split())
x = int(str(d)+'0'*(k-1))

if len(str(x)) == k:
	print(x)
else:
	print("No solution")