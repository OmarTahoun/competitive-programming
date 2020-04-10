n = list(input())
if '0' in n:
	n.remove('0')
else:
	n = n[:-1]
print(''.join(n))