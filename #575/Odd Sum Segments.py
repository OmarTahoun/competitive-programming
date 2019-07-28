from itertools import chain, combinations

def powerset(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))

def partitions(lst):
    for indices in powerset(range(1, len(lst))):
        partition = []
        i = 0
        for j in indices:
            partition.append(lst[i:j])
            i = j
        partition.append(lst[i:])
        if len(partition) == k:
        	yield partition

q = int(input())
for i in range(q):
	n, k = map(int, input().split())
	nums = list(map(int, input().split()))
	possible = partitions(nums)

	true = []
	for x in possible:
		flag = True
		for y in x:
			if sum(y) % 2 == 0:
				flag = False
				break
		if flag:
			true.append(x)
			break

	if len(true) == 0:
		print("NO")
	else:
		print("YES")
		for x in true[0]:
			print(nums.index(x[-1])+1, end = " ")
		print()


