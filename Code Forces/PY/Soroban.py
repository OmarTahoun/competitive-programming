digits = list(map(int, list(input())[::-1]))

for digit in digits:
	line = ""
	if digit<5:
		line += "O-|"
		for i in range(digit):
			line+="O"
		line+="-"
		for i in range(4-digit):
			line+='O'
	else:
		line += "-O|"
		digit -= 5
		for i in range(digit):
			line+="O"
		line+="-"
		for i in range(4-digit):
			line+='O'
	print(line)