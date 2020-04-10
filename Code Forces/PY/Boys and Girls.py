n, m = map(int, input().split())
res = ""

for i in range(n+m):
	if n>m:
		res += "B"
		n-=1
	else:
		res += "G"
		m-=1

print(res)
