import bisect
top = 10**5+10
pos = [True] * top

for i in range(2, top):
	if pos[i]:
		for j in range(2*i, top, i):
			pos[j] = False

primes = [i for i in range(2, top) if pos[i]]


n, m = map(int, input().split())
rows = [0] * n
cols = [0] * m
for i in range(n):
	row = list(map(int, input().split()))
	for j in range(m):
		nearest = bisect.bisect_left(primes, row[j])
		rows[i] += primes[nearest] - row[j]
		cols[j] += primes[nearest] - row[j]

	if rows[i] == 0:
		exit(print(0))

print(min(min(rows), min(cols)))
