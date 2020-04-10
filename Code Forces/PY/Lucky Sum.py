n = int(input())
b = 0
a = 0
total = 1000000001
fina = None
finb = None
while 7*b <= n:
	a = (n - 7*b)/4
	if a == int(a):
		a = int(a)
		if a+b < total:
			fina = a
			finb = b
		elif a+b == total:
			if b<finb:
				finb = b
	b+=1

if fina or finb:
	res = '4'*fina + '7'*finb
	print(res)
else:
	print(-1)