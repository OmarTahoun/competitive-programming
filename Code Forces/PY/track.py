from itertools import permutations as perm
op = []
def gen(tot, x, nums):
	if x == 5:
		if tot == 23:
			return True
		return False

	n = nums[x]
	return gen(tot+n, x+1, nums) or gen(tot-n, x+1, nums) or gen(tot*n, x+1, nums)


nums = list(map(int, input().split()))
nums.sort()
pos = list(perm(nums))

possible = False
for x in pos:
	if gen(x[0], 1, x):
		possible = True
		break

if possible:
	print("Possible")
else:
	print("Impossible")