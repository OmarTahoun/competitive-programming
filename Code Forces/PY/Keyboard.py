keys = "qwertyuiopasdfghjkl;zxcvbnm,./"

direction = input()
sentence = input()
res = ""
if direction == 'R':
	for char in sentence:
		res += keys[keys.index(char) - 1]
else:
	for char in sentence:
		res += keys[keys.index(char) + 1]
print(res)