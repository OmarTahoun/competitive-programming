n = int(input())

piles = list(map(int, input().split()))
heat = list(map(int, input().split()))


for i in range(n):
	ans = 0
	for j in range(i+1):
		if piles[j]>0:
			melted = piles[j] - heat[i]
			if(melted < 0): melted = piles[j]
			else: melted = heat[i]
			ans+= melted
			piles[j] -= heat[i]
		if(piles[j]<0): piles[j] = 0
	print(ans, end=" ")
print()
	