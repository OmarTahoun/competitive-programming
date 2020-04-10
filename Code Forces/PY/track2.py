from itertools import permutations as perm
def gen(s, x, n):
	if x == 0:
		eq = n[0]+s[0]+n[1]+s[1]+n[2]+s[2]+n[3]+s[3]+n[4]
		if eval(eq) == 23:
			return True
		return False
 
	return gen(s+"+", x-1, n) or gen(s+"-", x-1, n) or gen(s+"*", x-1, n)

nums = list(input().split())
pos = list(perm(nums))
flag = False

for x in pos:
	if gen("", 4, x):
		flag = True
		break
 
if flag :
	print("Possible")
else:
	print("Impossible")