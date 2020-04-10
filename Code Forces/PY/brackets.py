import bisect
res = []
def gen(s, o, c):
	if o+c == 0:
		res.append(s)
		return

	if o > 0:
		gen(s+'(', o-1, c)
	if c>0 and c>o:
		gen(s+')', o, c-1)

gen("", 4, 4)
x = "))((()))"

k = bisect.bisect_left(res, x)
print(k-1)
print(res[k-1])