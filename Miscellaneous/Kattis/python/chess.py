t = int(input())
for x in range(t):
	n = int(input())
	pos = []
	for i in range(n):
		line = input()
		pos.append(line.count('1') + line.count('.') + line.count('d'))
	for i in range(len(pos)):
		if pos[i] == max(pos) or pos[i] == max(pos)-1:
			print(i+1, end =" ")
	print("\n")
		
