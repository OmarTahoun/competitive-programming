k = int(input())

panel = ""
for i in range(4):
	line = input()
	panel+=line

keys = ['1', '2', '3', '4', '5', '6', '7', '8', '9']
for key in keys:
	if panel.count(key) > k*2:
		print("NO")
		exit()

print("YES")