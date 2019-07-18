n =int(input())
nums = list(map(int, input().split()))

vals = [x%2 for x in nums]
res = sum(vals)

if res == 1:
	print(vals.index(1)+1)
else:
	print(vals.index(0)+1)