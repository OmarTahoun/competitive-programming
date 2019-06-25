n = int(input())


line = ""
for i in range(n):
	for j in range(n):
		if (i+j)%2 == 0:
			line +='C'
		else:
			line += '.'
	line+="\n"

print(line.count('C'))
print(line)