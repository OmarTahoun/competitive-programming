count_x=count_o=count_empty = 0
winners_x = False
winners_0 = False
state = ""
lines = []
for i in range(3):
	line  = input()
	if len(set(line)) == 1:
		if line[0] == 'X':
			winners_x = True
		