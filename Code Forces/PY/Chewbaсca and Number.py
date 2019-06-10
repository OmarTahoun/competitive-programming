x = int(input())
x_s = str(x)

for i in range(len(x_s)):
	new_x = list(x_s)
	new_x[i] = str(9 - int(new_x[i]))
	if int(''.join(new_x))<x and int(''.join(new_x)) >= 0 and ''.join(new_x)[0] != '0':
		x = int(''.join(new_x))
		x_s = ''.join(new_x)
print(x)