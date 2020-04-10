for _ in range(int(input())):
	line = input();
	total = 0
	sofar = 0
	for i in range(len(line)):
		if line[i] == 'X':
			sofar = 0
		else:
			sofar +=1
		total+=sofar
	print(total)
