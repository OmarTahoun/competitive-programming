n , k = map(int, input().split())
count = 0
nums = list(input().split(' '))
for num in nums:
	if num.count('4') + num.count('7') <= k:
		count+=1

print(count)
	