pos = []
def gen(s, n):
	if len(s) == n:
		pos.append(int(s))
		return
	if len(s)>0 and len(s)<n:
		pos.append(int(s))

	gen(s+"4", n)
	gen(s+"7", n)


n = int(input())
gen("", len(str(n)))
pos.sort()
print(pos.index(n)+1)