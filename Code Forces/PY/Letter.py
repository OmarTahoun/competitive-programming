n, m = map(int, input().split())
max_x, max_y = 0, 0
min_x, min_y = n, m
picture = []

for i in range(n):
	line = input()
	picture.append(line)
	for j in range(m):
		if line[j] == "*":
			min_x, min_y = min(i, min_x), min(j, min_y)
			max_x, max_y = max(i, max_x), max(j, max_y)

for i in range(min_x, max_x+1):
	print(picture[i][min_y:max_y+1])
