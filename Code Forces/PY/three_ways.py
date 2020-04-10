n = int(input())
nums = list(map(int, input().split()))

total = sum(nums)
if total%3 != 0:
	print("0")
	exit()

portion = total//3

part_sum = 0
ways = 0
total_ways = 0
for i in range(n-1):
	part_sum += nums[i]
	if part_sum == 2*portion:
		total_ways+=ways
	if part_sum == portion:
		ways+=1
print(total_ways)

