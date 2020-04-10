import bisect
M = 1350851717672992089
first = []
second = []
f = []
s = []
def gen(total, i):
	if i == 19:
		f.append(total)
		return

	gen(total+first[i], i+1)
	gen(total, i+1)

def gengen(total, i):
	if i == 20:
		s.append(total)
		return

	gengen(total+second[i], i+1)
	gengen(total, i+1)

n = 1
for i in range(39):
	if n > M:
		break
	if i<19:
		first.append(n)
	else:
		second.append(n)

	n *= 3

gen(0, 0)
gengen(0, 0)
s.sort()
f.sort()
k = bisect.bisect_right(s, M)
s = s[:k]
for _ in range(int(input())):
	n = int(input())
	ans = M
	for x  in s:
		if x > ans: break
		rem = n-x
		k = bisect.bisect_left(f, rem)
		if k == len(f):continue
		ans = min(ans, x+f[k])
	print(ans)