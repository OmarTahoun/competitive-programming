first, second, third = [], [], []
n = int(input())
nums = list(map(int, input().split()))

for i in range(n):
	if nums[i] < 0:
		first.append(nums[i])
	elif nums[i] > 0:
		second.append(nums[i])
	else:
		third.append(nums[i])

if len(first)%2 == 0:
	third.append(first[-1])
	first = first[:-1]

if len(second) == 0:
	second.append(first[-1])
	second.append(first[-2])
	first = first[:-2]

print(len(first), *first, sep=" ")
print(len(second), *second, sep=" ")
print(len(third), *third, sep=" ")