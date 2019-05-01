from itertools import permutations

ans = -1
happies = [list(map(int, input().split(" "))) for i in range(5)]

perm = list(permutations([0,1,2,3,4]))

for a,b,c,d,e in perm:
	cur = happies[a][b]+happies[b][a]
	cur += happies[b][c]+happies[c][b]
	cur += (happies[c][d]+happies[d][c]) *2
	cur += (happies[e][d]+happies[d][e]) *2
	if cur > ans:
		ans = cur

print(ans)

