n = int(input())

if n%2 != 0:
	res = (n+1)/2 * -1
else:
	res = n/2
print(int(res))