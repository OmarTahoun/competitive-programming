t = int(input())

for i in range(t):
	a,b,c,n = map(int, input().split())
	while(n>0):
		if a == b == c:
			if n%3 == 0:
				a+=n/3
				b+=n/3
				c+=n/3
				n  = 0
			break
		if a == min(a,b,c):
			a+=1
			n-=1
		elif b == min(a,b,c):
			b+=1
			n-=1
		elif c == min(a,b,c):
			c+=1
			n-=1
	if a==b==c and n == 0:
		print("YES")
	else:
		print("NO")