n = int(input())
s = input()
count = 0
keys = []

for i in range(0, len(s), 2):
	keys.append(s[i])
	if(s[i+1].lower() not in keys):
		count+=1
	else:
		keys.remove(s[i+1].lower())
print(count)