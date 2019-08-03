s = input()
n = int(input())
poss = []
for i in range(n):
	x = input()
	if x[:len(s)] == s:
		poss.append(x)

poss.sort()
if poss:
	print(poss[0])
else:
	print(s)