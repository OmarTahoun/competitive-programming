n = int(input())
pairs = list(map(int, input().split()))
if 1 in pairs:
	first = pairs.index(1)
	last = pairs[::-1].index(1)
	pairs = pairs[first:n-last]
	total = 0
	for i in range(len(pairs)-1):
		if pairs[i] == 0 and pairs[i+1] == 1 and pairs[i-1] == 1:
			total+=1

	total += pairs.count(1)
	print(total)
else:
	print(0)

