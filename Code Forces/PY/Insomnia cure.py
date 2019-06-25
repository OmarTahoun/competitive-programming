k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())

values = sorted([k,l,m,n],reverse=True)

if 1 in values:
	print(d)
	exit()


print(n, d)