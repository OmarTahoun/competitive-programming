n = int(input())
lines = []
lines.append('0'*(n+2))
for i in range(n):
	line = input()
	line = '0'+line+'0'
	lines.append(line)
lines.append('0'*(n+2))
# print(*lines, sep="\n")

for i in range(1,n+1):
	for j in range(1,n+1):
		x = ""
		x += lines[i][j-1]
		x += lines[i][j+1]
		x += lines[i+1][j]
		x += lines[i-1][j]
		if x.count('o')%2!=0:
			print("NO")
			exit()

print("YES")
