n = int(input())

path = input()
prints = path.replace('.', '')
if len(set(prints)) == 1:
	if prints[0] == 'R':
		for i in range(n-1):
			if path[i] == '.' and path[i+1] == 'R':
				print(i+2,end=' ')
			if path[i] == 'R' and path[i+1] == '.':
				print(i+2)
	else:
		for i in range(n-1,-1,-1):
			if path[i] == '.' and path[i-1] == 'L':
				print(i,end=' ')
			if path[i] == 'L' and path[i-1] == '.':
				print(i)
else:
	for i in range(n-1):
		if path[i] == '.' and path[i+1] == 'R':
			print(i+2,end=' ')
		if path[i] == 'R' and path[i+1] == 'L':
			print(i+2)