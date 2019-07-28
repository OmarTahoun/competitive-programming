line = input()
count = 0
curr = 0
for i in range(0, len(line)-1):
	if line[i] != line[i+1] or curr == 4:
		curr = 0
		count += 1
		# i-=1
	else:
		curr += 1

if curr != 5:
	count+=1
print(count)