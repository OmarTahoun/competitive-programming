global big
big = 2**31
for t in range(int(input())):
	if(t>0): print()
	a, b = input().split(' ')
	c = ['0']*31
	d = ['0']*31
	print(a, b)
	while(int(b, 2)!=0 and int(b, 2) < big):
		for i in range(31):
			if(a[i] != b[i]):
				c[i] = '1'
			else:
				c[i] = '0'

			if(a[i] == '1' and b[i] == '1'):
				d[i] = '1'
			if(a[i] == '0' or b[i] == '0'):
				d[i] == '0'

		a = bin(int(''.join(c), 2))[2:]
		b = bin(int(''.join(d), 2)*2)[2:]
		a = a.zfill(31)
		b = b.zfill(31)
		c = ['0']*31
		d = ['0']*31
		if(int(a, 2)>=big):
			print("overflow", end=" ")
		else:
			print(a, end=" ")

		if(int(b, 2)>=big):
			print("overflow")
		else:
			print(b)



