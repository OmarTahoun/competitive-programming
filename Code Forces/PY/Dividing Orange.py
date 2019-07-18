n, k = map(int, input().split())
line  = list(map(int, input().split()))

nums = list(range(1,n*k+1))

for i in range(0,k,n):
	for j in range(n):
		print(nums[i+j], end = ' ')

	print()
