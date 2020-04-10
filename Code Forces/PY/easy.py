n = int(input())
total = sum(list(map(int, input().split())))
if total != 0:
	print("HARD")
else:
	print("EASY")