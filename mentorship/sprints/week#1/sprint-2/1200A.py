n = int(input())
s = ['0'] * 10
line = input()

for i in range(n):
	if line[i] == 'L':
		s[s.index('0')] = '1'
	elif line[i] == 'R':
		z = s[::-1]
		s[9 - z.index('0')] = '1'
	else:
		s[int(line[i])] = '0'
print(''.join(s))

