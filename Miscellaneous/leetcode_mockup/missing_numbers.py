nums = list(map(int, input().split()))
missing = []
for i in range(len(nums)):
	index = abs(nums[i]) - 1
	nums[index] = 0 - abs(nums[index])
for i  in range(len(nums)):
	if(nums[i] > 0):
		missing.append(i+1)
print(missing)