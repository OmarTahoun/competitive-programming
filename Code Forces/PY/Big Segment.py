n = int(input())
lowest, highest = 1000000001, 0
segments = []
for i in range(n):
	l, r = map(int, input().split())
	if l<=lowest: lowest = l
	if r>=highest: highest = r
	segments.append([l,r])

if [lowest,highest] in segments:
	print(segments.index([lowest,highest])+1)
else:
	print(-1)


	