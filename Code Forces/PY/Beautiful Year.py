year = int(input())

flag = False
while not flag:
	year += 1
	if len(set(str(year))) == len(str(year)):
		print(year)
		exit()