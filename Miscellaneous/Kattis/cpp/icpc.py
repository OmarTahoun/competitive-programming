n = int(input())
unis = []
teams = []

for i in range(n):
	uni, team = input().split(" ")
	if uni in unis:
		continue
	else:
		unis.append(uni)
		teams.append(team)

for i in range(12):
	print(unis[i]+" "+teams[i])