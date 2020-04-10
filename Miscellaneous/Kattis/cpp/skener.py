r, c,zr,zc = list(map(int, input().split()))

for i in range(r):
	line = input()
	newline = ""
	for char in line:
		newline += char*zc
	for j in range(zr):
		print(newline)
