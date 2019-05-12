n = int(input())

cups = {}
for i in range(n):
	a, b = input().split(" ")
	if a.isnumeric():
		cups[b] = int(a) // 2
	else:
		cups[a] = int(b)

sorted_cups = sorted(cups.items(), key = lambda kv: kv[1])
for cup in sorted_cups:
	print(cup[0])
