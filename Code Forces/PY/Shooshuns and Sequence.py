n, k =map(int, input().split())
seq = list(map(int, input().split()))
ans = 0
if len(set(seq[k-1:])) != 1:
	ans = -1
if ans != -1:
	for i in reversed(range(k)):
		if seq[i] != seq[n-1]:
			ans = i+1
			break

print(ans)