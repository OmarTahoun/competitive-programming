n =  int(input())
sections = list(map(int, input().split()))
scores = []

for i in range(n):
	total = 1
	curr = sections[i]
	for j in range(i+1,n):
		if sections[j]<=curr:
			total+=1
			curr = sections[j]
		else:
			break

	curr = sections[i]
	for k in reversed(range(0,i)):
		if sections[k]<=curr:
			total+=1
			curr = sections[k]
		else:
			break
	scores.append(total)

print(max(scores))