r, c = map(int, input().split())

rows = 0
cols = 0
lines = []
for i in range(r):
	row = input()
	lines.append(row)
	if 'S' in row:
		rows += 1
for i in range(c):
	col = ""
	for j in range(r):
		col += lines[j][i]
	if 'S' in col:
		cols+=1

print(r*c - rows*cols)



