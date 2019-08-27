arrange = {}
left = ""
ranks = []
for i in range(3):
	line = input()
	if line[1] == '<':
		left+= line[0]
	else:
		left+= line[2]

for char in ['A', 'B', 'C']:
	arrange[left.count(char) + 1] = char
	ranks.append(left.count(char) + 1)

if 1 in ranks and 2 in ranks and 3 in ranks:
	res = arrange[3]+arrange[2]+arrange[1]
	print(res)
else:
	print("Impossible")