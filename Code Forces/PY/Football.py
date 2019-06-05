n = int(input())

items = []
for i in range(n):
	team = input()
	items.append(team)

teams = set(items)
maxt = 0
winner = ""
for team in teams:
	if items.count(team) >= maxt:
		maxt = items.count(team)
		winner = team


print(winner)