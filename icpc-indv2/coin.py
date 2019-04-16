import sys
sys.stdin = open('buy.in', 'r') 
t = int(input())
for i in range(t):
	n = int(input())
	coins = list(map(int, input().split()))
	profit = [x * coins.count(x) for x in coins]
	print(max(profit))
		