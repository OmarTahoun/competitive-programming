n = int(input())

for i in range(n):
	a, b, c = map(int, input().split())
	total = a+b+c
	each = total//2
	print(each)