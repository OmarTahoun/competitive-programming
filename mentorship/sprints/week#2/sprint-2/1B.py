n = int(input())

for _ in range(n):
	word = input()
	col = ""
	row = ""
	

	flag = False
	for i in range(1, len(word)-1):
		if(word[i].isdigit() and word[i+1].isalpha()):
			flag = True
			break
	
	if(word[0] == 'R' and flag):
		for i in range(1, len(word)):
			if(word[i].isalpha()):
				row = word[1:i]
				col = word[i+1:]


		col = int(col)
		res = ""
		while(col != 0):
			col -= 1
			loc = col % 26
			res = chr(loc + ord('A')) + res
			col //= 26
		print(res+row)

	else:
		for i in range(len(word)):
			if(word[i].isdigit()):
				col = word[:i]
				row = word[i:]
				break

		res = "R"+row+"C"

		column = 0
		for c in col:
			column *= 26
			column += (ord(c) - ord('A') + 1)
		res += str(column)
		print(res)

