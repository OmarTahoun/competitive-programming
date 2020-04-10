n = int(input())
nums = list(map(int, input().split()))
visited = [False]*(n+1)
order = {}
for i in range(1, n+1):
	order[i] = nums[i-1]


cnt = 0
for k in order:
	if not visited[k]:
		visited[k] = True

	if order[k] == k:
		continue

	tmp = order[k]
	while(not visited[tmp]):
		visited[tmp] = True
		tmp = order[tmp]
		cnt+=1

print(cnt)



