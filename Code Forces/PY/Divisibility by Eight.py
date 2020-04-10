n = input()
if int(n)%8 == 0:
	print("YES\n"+n)
	exit()
for i in range(len(n)):
	new = n[:i] + n[i+1:]
	val = int(new)
	if (val%8 == 0 and val>=0):
		if (new[0] == "0" and len(new)>1):
			continue
		print("YES\n"+new)
		exit()
print("NO")