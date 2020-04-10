guess = []
def gen(s, x):
	if x == 0:
		guess.append(s)
		return
	gen(s+1, x-1)
	gen(s-1, x-1)

s1 = list(input())
s2 = list(input())
pos = 0
ppos = 0
for c in s1:
	if c == "+":
		pos += 1
	else:
		pos -= 1


qs = 0
for c in s2:
	if c == "+":
		ppos += 1
	elif c == "-":
		ppos -= 1
	else:
		qs += 1

gen(0, qs)
guess = [ppos+x for x in guess]
ans = guess.count(pos)/len(guess)
print("%.10f" %ans)




