t = int(input())
for i in range(t):
	k, b, n  = map(int, input().split())
	total = 0
	while(n>0):
		total += (n%b) * (n%b)
		n /= b
	print(str(k)+" "+ str(total))	