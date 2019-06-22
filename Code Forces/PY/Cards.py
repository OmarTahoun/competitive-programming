n = int(input())

nums = list(map(int, input().split()))
for i in range(n):
	nums[i] = (nums[i], i+1)

nums.sort()
for i in range(n//2):
	print(nums[i][1] ,  nums[n-i-1][1])