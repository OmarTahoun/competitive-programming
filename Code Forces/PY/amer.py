for _ in range(int(input())):
	conf = input()
	m = conf.count("M")
	f = conf.count("F")

	if f in [3,7,4,6,0,10]:
		print("Yes")
	else:
		print("No")