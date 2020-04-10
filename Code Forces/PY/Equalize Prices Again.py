from math import *
q = int(input())
for i in range(q):
	n = int(input())
	prices = list(map(int, input().split()))
	org = sum(prices)
	print(ceil(org/n))