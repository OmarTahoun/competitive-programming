n = int(input())
nums = list(map(int, input().split()))
count = 0
positions = {}
for i in range(n):
	if nums[i] in positions:
		diff = abs(positions[nums[i]][1] - i)
		if positions[nums[i]][0] == 0:
			positions[nums[i]][0] = diff
		if diff != positions[nums[i]][0] and positions[nums[i]][2] == 1:
			positions[nums[i]][2] = 0
			count+=1
		positions[nums[i]][1] = i
	else:
		positions[nums[i]] = [0]*3
		positions[nums[i]][0] = 0
		positions[nums[i]][1] = i
		positions[nums[i]][2] = 1
print(len(positions)-count)
for x in sorted(positions.keys()):
	if positions[x][2]:
		print(x, positions[x][0])

