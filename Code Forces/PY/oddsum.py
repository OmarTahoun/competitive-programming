for _ in range(int(input())):
	n = int(input())
	nums = list(map(int, input().split()))
	ev = 0
	odd = 0
	for i in range(n):
		if nums[i] % 2 == 0:
			ev += 1
		else:
			odd += 1

	if sum(nums) % 2 != 0:
		print("YES")
	elif ev > 0 and odd > 0:
		print("YES")
	else:
		print("NO")

