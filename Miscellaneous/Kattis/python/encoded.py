t = int(input())
for j in range(t):
	word = input()
	n = len(word)
	x = int(n ** (1/2))

	formatted = []
	out = []
	for i in range(0,n, x):	formatted.append(word[i:i+x][::-1])
	for col in range(x):
		for row in range(x):
			out.append(formatted[row][col])
	print(''.join(out))

