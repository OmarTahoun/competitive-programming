n, m = map(int, input().split())

prev = 13
flag = False
for i in range(n):
	line = set(input())
	if len(line) == 1 and int(list(line)[0]) != prev:
		prev = int(list(line)[0])
	else:
		flag = True

if flag:print('NO')
else:print('YES')