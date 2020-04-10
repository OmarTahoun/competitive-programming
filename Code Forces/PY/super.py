import bisect
pos = []
def gen(a, f, s):
	if f+s == 0:
		pos.append(int(a))

	if f>0:
		gen(a+"4", f-1, s)
	if s>0:
		gen(a+"7", f, s-1)

n = input()
if len(n) % 2 != 0:
	half = (len(n)+1)//2
	gen("", half, half)
else:
	half = len(n)//2
	gen("", half, half)
	gen("", half+1, half+1)

nearest = bisect.bisect_left(pos, int(n))
print(pos[nearest])

