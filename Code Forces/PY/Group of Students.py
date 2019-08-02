m = int(input())
students = list(map(int, input().split()))
x, y = map(int, input().split())

for i in range(0,m):
	left = sum(students[:i])
	right = sum(students[i:])
	if left>=x and left<=y and right>=x and right<=y:
		print(i+1)
		exit()

print(0)