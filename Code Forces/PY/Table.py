n, m = map(int, input().split())

rows = []
cols = [""]*m
for i in range(n):
	row = input().split()
	rows.append(row)
	for j in range(m):
		cols[j]+= row[j]

if '1' in rows[0] or '1' in cols[0] or '1' in cols[-1] or '1' in rows[-1]:
	print(2)
else:
	print(4)