import math
n = int(input())
nums = map(int, input().split())

for num in nums:
	for i in range(2, math.sqrt(num) + 1):
	    if num % i == 0:
		    print("YES")
		    exit()

print("NO")
