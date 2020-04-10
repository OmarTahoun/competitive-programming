pos = []
def gen(arr, i, x, n):
	if i > n:
		if len(x) >= 2:
			pos.append(x)
		return

	gen(arr, i+1, x+[arr[i]], n)
	gen(arr, i+1, x, n)


n, l, r, z = map(int, input().split())
nums = list(map(int, input().split()))
gen(nums, 0, [], n-1)
cnt = 0
for x in pos:
	tot = sum(x)
	diff = max(x) - min(x)
	if tot >= l and  tot <= r and diff>=z:
		cnt+=1
print(cnt)
