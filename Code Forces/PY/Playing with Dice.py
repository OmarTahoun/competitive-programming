a, b = map(int, input().split())

a_win =0
b_win =0
draw = 0

for i in range(1,7):
	if abs(a-i) == abs(b-i):
		draw+=1
	elif abs(a-i) > abs(b-i):
		b_win+=1
	else:
		a_win+=1

print(a_win, draw, b_win, sep=' ')