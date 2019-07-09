n = int(input())
small = (n//7)*2
large = n%7
if large<2:
	print(small, small+large)
elif large <=5:
	print(small, small+2)
else:
	print(small+1, small+2)