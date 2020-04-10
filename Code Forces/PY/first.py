c = int(input())
for i in range(c):
	dep = []
	k, j = map(int, input().split())
	for j in range(k):
		x, y = input().split()
		dep.append((x,y))
	delayed = list(input().split())
	for pair in dep:
		if pair[1] in delayed and pair[0] not in delayed:
			delayed.append(pair[0])
	delayed.sort()
	print("Case #", + str(i+1) + ": ", end='')
	print(*delayed, sep=" ")