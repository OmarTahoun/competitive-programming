n = int(input())
order = {}
for i in range(1, n+1):
	order[i] = i-1


norder = list(map(int, input().split()))
bribes = 0
for i in range(n):
	if order[norder[i]] - i > 2:
		exit(print("Too chaotic"))

	for j in range(max(order[norder[i]]-1, 0), i):
		if norder[j] > order[norder[i]]:
			bribes+=1

print(bribes)
