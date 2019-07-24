n, k = map(int, input().split())
line = input()
steps = []
posg, post = line.index('G') , line.index('T')
dist = abs(line.index('G') - line.index('T'))

if dist%k != 0:
	print("NO")
	exit()

while posg != post:
	if post > posg:
		posg+=k
	else:
		posg-=k
	steps.append(line[posg])

if '#' in steps:
	print("NO")
else:
	print("YES")
