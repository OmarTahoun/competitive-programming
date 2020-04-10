n = int(input())

line  = list(map(int, input().split(" ")))
line.sort()
res = line[-1] - line[0]
a = line.count(line[-1])
b = line.count(line[0])
count = 0
if a == n or b == n:
	count = (n *(n-1))/2
else:
	count = a*b
print(res, int(count))