n, m = map(int, input().split())
words = []
for i in range(n):
	words.append(input())

res = ""
resv = ""


check = words[::]
bali = ""
for word in words:
	if word in check:
		if word == word[::-1] and bali=="":
			bali = word

		check.remove(word)
		if word[::-1] in check:
			res+= word
			check.remove(word[::-1])
			if bali == word:
				bali = ""

resv = res[::-1]
fin = res+bali+resv
print(len(fin))
print(fin)
