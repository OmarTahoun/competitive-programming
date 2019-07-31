n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = a[0]
for x in a:
	c = c | x
d = b[0]
for x in b:
	d = d | x
print(c+d)