record = list(input())

a = 0
b = 0
for i in range(0,len(record)-1,2):
	if record[i] == "A":
		a += int(record[i+1])
	else:
		b += int(record[i+1])

if a>b:
	print("A")
else:
	print("B")

