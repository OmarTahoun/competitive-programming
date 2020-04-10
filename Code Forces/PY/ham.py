def gen(s, c, n, h):
	if len(s) == n:
		if c <= 0:
			print(s)
		return

	gen(s+"0", c, n, h)
	if c>0:
		gen(s+"1", c-1, n, h)


n, h = map(int, input().split())
gen("", h, n, h)


