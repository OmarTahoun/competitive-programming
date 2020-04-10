n = int(input())
arr = list(map(int, input().split()))

cnt = 0
for i in range(n):
	for j in range(i+1, n+1):
		tmp = 0
		for k in range(n):
			if k>=i and k<=j:
				tmp += 1-arr[k]
			else:
				tmp += arr[k]
		cnt = max(cnt, tmp)
print(cnt)