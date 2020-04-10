pos = []
def gen(set, prefix, n, k):
	if (n == 0): 
		if prefix == prefix[::-1]:
			pos.append(prefix)
		return

	if len(prefix)>0:
		if prefix == prefix[::-1]:
			pos.append(prefix)


	for i in range(k): 
		newPrefix = prefix + set[i]
		gen(set, newPrefix, n-1, k) 



n, k = map(int, input().split())
chars = []
for _ in range(k):
	chars.append(input())
gen(chars, "", n, k)
print(*sorted(pos), sep = "\n")