k = int(input())
months = list(map(int, input().split()))

months.sort(reverse = True)

total = 0
count = 0
for month in months:
	if total<k:
		total += month
		count+=1
	else:
		break
if total<k:
	count = -1
print(count)
