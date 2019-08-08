n = int(input())
r = ""
w = input()

if n % 2 == 0:
	for i in range(n):
		if (i%2) ==0:
			r = w[i]+r
		else:
			r = r+w[i]
else:
	for i in range(n):
		if (i%2)==0:
			r = r + w[i]
		else:
			r = w[i]+r

print(r)
