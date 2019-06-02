n = int(input())

available = []
snacks = map(int, input().split())

for snack in snacks:
	available.append(snack)
	while n in available:
		print(n, end = ' ')
		n-=1
	print()