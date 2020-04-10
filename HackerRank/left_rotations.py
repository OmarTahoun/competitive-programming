a = [1,2,3,4,5]
n = 5
d = 3

for i in range(n):
	new = (i+1)-d
	if new<0:
		new += n
	print(a[i], new)