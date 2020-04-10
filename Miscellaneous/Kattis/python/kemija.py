line = list(input())
for i in range(len(line)):
	if line[i] == 'p':
		del line[i]
		print(''.join(line))

new_line = "".join(line)
print(new_line)