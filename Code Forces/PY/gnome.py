a = input()
b = input()

if len(a) != len(b):
	print("NO")
else:
	swap = []
	count = 0

	for i in range(len(a)):
		if a[i] != b[i]:
			count+=1
			swap.append(i)
	if count!=2:
		print("NO")

	else:
		a = list(a)
		a[swap[0]], a[swap[1]] = a[swap[1]], a[swap[0]]
		a = ''.join(a)
		if a == b:
			print("YES")
		else:
			print("NO")

