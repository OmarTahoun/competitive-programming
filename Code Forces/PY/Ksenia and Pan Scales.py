a, b = input().split('|')
new = input()

for char in new:
	if len(a) < len(b):
		a+=char
	else:
		b+=char

if len(a) == len(b):
	print(a+"|"+b)
else:
	print("Impossible")