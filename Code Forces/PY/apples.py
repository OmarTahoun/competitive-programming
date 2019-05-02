n = int(input())
apples = list(map(int, input().split(" ")))
total = sum(apples)
a = apples.count(100)
b = apples.count(200)

if total %200 !=0:
	print("NO")
else:
	flag = 0
	half = total /2
	for i in range(b+1):
		taken = 200*i
		if taken <= half and half - taken <= a*100:
			flag = 1
	if flag: print("YES")
	else: print("NO")

