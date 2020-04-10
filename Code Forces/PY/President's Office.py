n, m , p = input().split()
n, m = int(n), int(m)
lines = []
lines.append('.'*(m+2))
for i in range(n):
	row = '.'+input()+'.'
	lines.append(row)
lines.append('.'*(m+2))

neighbors = []
for i in range(1, n+1):
	for j in range(1, m+1):
		x = lines[i][j]
		a = lines[i-1][j]
		b = lines[i][j+1]
		c = lines[i+1][j]
		d = lines[i][j-1]
		if x == p:
			if a >= 'A' and a<='Z' and a != p:
				neighbors.append(a)
			if b >= 'A' and b<='Z' and b != p:
				neighbors.append(b)
			if c >= 'A' and c<='Z' and c != p:
				neighbors.append(c)
			if d >= 'A' and d<='Z' and d != p:
				neighbors.append(d)
print(len(set(neighbors)))
