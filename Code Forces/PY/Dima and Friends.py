n = int(input())

fingers = sum(list(map(int, input().split())))
poss = 0
n+=1
for i in range(1,6):
	if (i+fingers) % n != 1:
		poss+=1
print(poss)

