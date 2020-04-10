names = {}
for _ in range(int(input())):
	name = input()
	if name in names:
		names[name] += 1
		print(name+str(names[name]))
	else:
		names[name] = 0
		print("OK")