def search(root, cats):
	visited[root] = 1
	path_count[root] = cats
	for x in tree[root]:
		if cat[x]:
			cats+=1
		else:
			cats = 0
		if not visited[x]:
			search(x,cats)


n, m = map(int, input().split())
cat = list(map(int, input().split()))
tree = [[] for _ in range(n)]
for i in range(n-1):
	a,b = map(int, input().split())
	tree[a-1].append(b-1)

cats = cat[0]
path_count = [0] * n
visited = [0] * n
search(0,cats)

print(*path_count, sep=" ")
