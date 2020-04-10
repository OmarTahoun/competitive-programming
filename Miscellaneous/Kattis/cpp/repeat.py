line = list(input().split(" "))
unique = list(set(line))

if len(line) == len(unique):
	print("yes")
else:
	print("no")