first, second= map(int, input().split())


count = 0

while first>0 and second>1 or second>0 and first>1:
	if first < second:
		first+=1
		second-=2
	else:
		first-=2
		second+=1
	count+=1
print(count)



