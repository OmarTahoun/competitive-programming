n = int(input())
nums = list(map(int, input().split()))

u_nums = list(set(nums))
u_nums.sort()
if len(u_nums)>1:
	print(u_nums[1])
else:
	print("NO")