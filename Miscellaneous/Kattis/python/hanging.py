c, n = list(map(int, input().split(" ")))

cur = 0
total = 0
for i in range(n):
	word, number = input().split(" ")
	if word == "enter" and cur + int(number)<=c:
		cur += int(number)
	elif word == "leave":
		cur -= int(number)
	else:
		total += 1

print(total)