word = input()
count = 0
for char in set(word):
	if word.count(char) & 1:
		count += 1


if count == 0  or count&1:
	print("First")
else:
	print("Second")