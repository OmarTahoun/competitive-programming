n = int(input())
bags = list(map(int, input().split()))
count = 0
for i in range(n):
	if (sum(bags)-bags[i]) % 2 == 0:
		count+=1

print(count)