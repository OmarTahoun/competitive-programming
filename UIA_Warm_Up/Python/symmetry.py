n = int(input())
counter = 0
while(n!=0):
	top =[]
	bottom = []
	for i in range(n):
	    if  i%2 == 0:
	        top.append(input())
	    else:
	        bottom.append(input())
	bottom = bottom[::-1]
	counter+=1
	print('SET '+str(counter))
	print(*top, sep='\n')
	print(*bottom, sep='\n')
	n = int(input())





