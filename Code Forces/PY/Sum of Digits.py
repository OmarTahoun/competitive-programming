n = input()
count = 0
while len(n) > 1:
	tmp = list(map(int, n))
	n = str(sum(tmp))
	count+=1
print(count)