word = input().split("WUB")
org = []
for x in word:
	if len(x)>0:
		org.append(x)
print(*org, sep=' ')