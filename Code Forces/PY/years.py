now = int(input())
while True:
	now += 1
	year = str(now)
	if len(set(year)) == len(year):
		print(now)
		exit()
