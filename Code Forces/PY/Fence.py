n, k = map(int, input().split())
hights = list(map(int, input().split()))
total = sum(hights[:k])
ans = []
for i in range(n-k):
	ans.append(total)
	total = total+hights[i+k] - hights[i]
ans.append(total)

print(ans.index(min(ans))+1) 