n = int(input())
nums = list(map(int, input().split()))

unique = set(nums)

for num in unique:
	if nums.count(num) > (n+1)/2:
		print("NO")
		exit()

print("YES")