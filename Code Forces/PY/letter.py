header = list(input())
need = list(input().split(" "))
flag = 0
for word in need:
	for char in word:
		if char in header:
			header.remove(char)
		else:
			flag = 1
			break
if flag:print("NO")
else:print("YES")

