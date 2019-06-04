n = int(input())
coins = list(map(int, input().split()))
coins.sort(reverse = True)

total = sum(coins)
count = 0
taken = 0
while(True):
	taken += coins[0]
	count+=1
	total-=coins[0]

	coins = coins[1:]
	if taken>total:
		print(count)
		exit()