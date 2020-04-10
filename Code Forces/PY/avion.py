count = 0
for i in range(1, 6):
	line = input()
	if "FBI" in line:
		print(i, end=" ")
		count +=1

if count == 0:
	print("HE GOT AWAY!")