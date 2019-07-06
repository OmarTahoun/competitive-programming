n, m = map(int, input().split())

count = 0
while (n*m) > 0:
	n-=1
	m-=1
	count+=1
if count%2 == 0:
	print("Malvika")
else:
	print("Akshat")
