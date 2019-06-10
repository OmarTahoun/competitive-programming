sides = {6:1, 3:4, 2:5, 1:6, 4:3, 5:2}
n = int(input())
bottom = sides[int(input())]
z = input()
flag = False

for i in range(n-1):
	faces = [1, 2, 3, 4, 5, 6]
	a,b = map(int, input().split())
	faces.remove(a)
	faces.remove(b)
	faces.remove(sides[a])
	faces.remove(sides[b])
	if bottom not in faces:
		flag = True
		continue

	faces.remove(bottom)
	bottom = faces[0]

if flag:
	print("NO")
else:
	print("YES")


