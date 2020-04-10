n = int(input())
a = int(input(), 2)
b = int(input(), 2)

a = list(map(int, format(a, '0'+str(n)+'b')))
b = list(map(int, format(b, '0'+str(n)+'b')))

count = 0
for i in range(n-1):
	for j in range(i+1, n):
		if (a[i] != a[j]) and (b[i] == 0 or b[j] == 0):
			count+=1



print (count)

