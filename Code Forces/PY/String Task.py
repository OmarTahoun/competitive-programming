v = ['a', 'e', 'i', 'o', 'u', 'y']


word = input()
word = word.lower()
chars = list(word)
new = ""
for i in range(len(chars)):
	if chars[i] not in v:
		new+='.'+chars[i]
print(new)
