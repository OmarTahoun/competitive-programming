n = int(input())
holds = list(map(int, input().split()))

costs = []
for i in range(1,n-1):
	track = holds[:i] + holds[i+1:]
	costs.append(max([(track[j+1] - track[j]) for j in range(len(track)-1)]))

print(min(costs))
