n = int(input())
hams = list(input())
sitting = hams.count('x')
standing = hams.count('X')
mins = 0


if sitting>standing:
	needed = sitting-n//2
	i = 0
	while needed > 0:
		if hams[i] == 'x':
			hams[i] = 'X'
			mins+=1
			needed-=1
		i+=1

elif sitting<standing:
	needed = standing-n//2
	i = 0
	while needed > 0:
		if hams[i] == 'X':
			hams[i] = 'x'
			mins+=1
			needed-=1
		i+=1

print(mins)
print(''.join(hams))