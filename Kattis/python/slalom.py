def dist(a,b,c,d):
	x = (a-c)**2
	y = (b-d)**2
	res = (x+y)**(1/2)
	return res

n = int(input())
while(n!= 0):
	myX, myY = list(map(float, input().split(" ")))
	distance = 0.0
	for i in range(n):
		y, x1, x2 = list(map(float, input().split(" ")))
		a = dist(myX, myY, x1, y)
		b = dist(myX, myY, x2, y)
		distance += min(a, b)
		if a<b:
			myX = x1
			myY = y
		else:
			myX = x2
			myY = y
	print("%6.6f" %distance)

	bla = input()
	n = int(input())