n = int(input())
rates = list(map(int, input().split()))

ranks = {}
rates_sorted = sorted(rates, reverse = True)
for i in range(1,n+1):
	if rates_sorted[i-1] not in ranks:
		ranks[rates_sorted[i-1]] = i
for rate in rates:
	print(ranks[rate], end = " ")