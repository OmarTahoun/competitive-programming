for _ in range(int(input())):
	a = b = 0
	n = int(input())
	nums = list(map(int, input().split()))
	nums.sort(reverse = True)
	for num in nums:
		if a>b:
			b+=num
		else:
			a+=num
	print(abs(a-b))