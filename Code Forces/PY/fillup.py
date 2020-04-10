import collections
n, m = map(int, input().split())

cmds = {}

for _ in range(m):
	a,b, k = map(int, input().split())
	if (a,b) in cmds:
		cmds[(a,b)] += k
	else:
		cmds[(a,b)] = k


od = collections.OrderedDict(sorted(cmds.items()))
big = 0
for i in range(1, n+1):
	curr = 0
	for k in od:
		if i < k[0]:
			break
		if i>=k[0] and i<=k[1]:
			curr+= od[k]
	big = max(big, curr)

print(big)
