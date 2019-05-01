n =  int(input())
nums = list(map(int, input().split(" ")))
if 7 in nums or 5 in nums:
	print(-1)
	exit()
else:
	one = nums.count(1)
	two = nums.count(2)
	three = nums.count(3)
	four = nums.count(4)
	six = nums.count(6)
	if (one == n//3 and two+three == n//3 and four+six == n//3 and four<= two  and six>=three):
		for i in range(three):
			print(1, 3, 6)
		for i in range(four):
			print(1, 2, 4)
		for i in range(six-three):
			print(1, 2, 6)
	else:
		print(-1)