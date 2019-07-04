n = int(input())

rats = []
woild = []
men = []
captain = ''

for i in range(n):
	name, rank = input().split()
	if rank == 'rat': rats.append(name)
	if rank == 'man': men.append(name)
	if rank == 'woman' or rank == 'child': woild.append(name)
	if rank == 'captain': captain = name


for rat in rats:print(rat)
for x in woild: print(x)
for man in men:print(man)
print(captain)