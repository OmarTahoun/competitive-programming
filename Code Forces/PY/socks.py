n = int(input())
x = list(map(int, input().split()))

frq = {}
for j in x:
	if j in frq:
		frq[j] += 1
	else:
		frq[j] = 1
tot = 0
for c in frq:
	tot += frq[c] // 2
print(tot)

