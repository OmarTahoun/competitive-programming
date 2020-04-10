import math
for _ in range(int(input())):
	n = int(input())
	nums = list(map(int, input().split()))
	large = 0
	small = 1000000001
	f = False
	for i in range(n):
		if nums[i] != -1:
			f = True
			if nums[i]>= large:
				large = nums[i]
			if nums[i] <= small:
				small = nums[i]

	if not f:
		large = 0
		small = 0

	k = math.ceil((large+small)/2)
	if nums[0] == -1:
		nums[0] = k

	diff = (large-small)//2
	for i in range(1,n):
		if nums[i] == -1:
			nums[i] = k


		new_diff = abs(nums[i] - nums[i-1])
		diff = max(diff, new_diff)


	print(diff, k)
