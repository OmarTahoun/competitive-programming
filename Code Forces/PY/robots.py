n = int(input())
points = [1] * n

a = list(map(int, input().split()))
b = list(map(int, input().split()))
if a == b:
	print(-1)
	exit()
	
ascore = [0]*n
bscore = [0]*n
for i in range(n):
	if a[i]:
		ascore[i] = points[i] 
	if b[i]:
		bscore[i] = points[i] 
if sum(ascore) > sum(bscore):
	print(1)
else:
	while(sum(ascore)<= sum(bscore)):
		for i in range(n):
			if a[i] == 1 and b[i] == 0:
				ascore[i]+=1
			if sum(ascore) > sum(bscore):
				print(ascore[i])
				break