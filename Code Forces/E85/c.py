def explode(i, hit):
	if(i > n):
		i = 1
	if new_monsters[i][0] > 0:
		new_monsters[i][0] -= hit

		if(new_monsters[i][0] <= 0):
			explode(i+1, new_monsters[i][1])
		else:
			return
	return

for _ in range(int(input())):
	n = int(input())
	monsters = {}
	for i in range(n):
		a, b = map(int, input().split())

		monsters[i+1] = [a, b]

	mons = sorted(monsters.items(), key = lambda k: k[1])

	bullets = 0
	new_monsters = {}
	for i , k in mons:
		new_monsters[i] = k
	
	for i, h in new_monsters.items():
		if h[0] > 0:
			bullets += h[0]
			explode(i+1, h[1])

	print(bullets)