def gen(s, l):
	if l==0:
		print(s)
		return

	gen(s+"+", l-1)
	gen(s+"-", l-1)

gen("+-", 2)


for i in range(len(s)):
	if s[i] == "?"
	