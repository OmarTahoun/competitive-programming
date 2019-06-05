n = int(input())

rates = []
change = False
for i in range(n):
	old, new = map(int, input().split())
	rates.append(old)
	if old != new : change = True

if change:
	print("rated")
else:
	if rates == sorted(rates, reverse=True):
		print("maybe")
	else:
		print("unrated")