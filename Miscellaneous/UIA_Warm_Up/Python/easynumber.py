a,b,c = map(int, input().split())

res = []
for i in range(1, a+1):
	for j in range(1, b+1):
		for k in range(1, c+1):
			num = i*j*k
			count = 0
			div = 1
			while div*div <= num:
				if num%div == 0:
					
					if num/div == div:
						count+=1
					else:
						count+=2
				div+=1

			res.append(count)
print(sum(res))

