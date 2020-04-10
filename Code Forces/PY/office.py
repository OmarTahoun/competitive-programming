def gen(s, o, c):
	if o+c == 0:
		print(s)
		return

	if o>0:
		gen(s+"(", o-1, c)

	if c>0 and c>o:
		gen(s+")", o, c-1)


n = int(input())

gen("", n, n)