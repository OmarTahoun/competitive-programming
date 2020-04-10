def calc_dist(x1,y1,x2,y2):
	return (((x1-x2)**2)+ ((y1-y2)**2))**0.5

n, e, p = list(map(int, input().split()))
trees = []
connected = []
for i in range(n):
	x, y = list(map(float, input().split()))
	trees.append((x,y))

nearest = trees[e-1]
needs = trees[e:]

for i in range(p):
	a, b = list(map(int, input().split()))
	if a-1 == trees.index(nearest):
		nearest = trees[b-1]

dist = 0
for i in range(len(needs)):
		dist += calc_dist(nearest[0], nearest[1], needs[i][0], needs[i][1])
print(dist)
