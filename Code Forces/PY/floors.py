n = int(input())+1
nword = str(n)
count = 1

while("8" not in nword):
	n+=1
	nword = str(n)
	count += 1

print(count)