word = "hello"
got = input()

res = ""
j=0

for i in range(5):
	for j in range(j, len(got)):
		if got[j] == word[i]:
			res+= got[j]
			j+=1
			break
if res == word:
	print("YES")
else:
	print("NO")
