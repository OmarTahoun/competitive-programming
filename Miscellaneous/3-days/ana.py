t = int(input())
word = ""
for i in range(t):
	res = 0
	word = input()
	if len(word)%2 != 0:
		print(-1)
		continue
	mid = int(len(word)/2)

	a = word[ : mid]
	b = word[mid : ]
	un = set(a)
	for char in un:
		res+= min(a.count(char), b.count(char))

	print(len(a) - res)
