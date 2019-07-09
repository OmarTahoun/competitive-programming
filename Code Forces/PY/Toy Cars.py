n = int(input())

good = []
num = 0
for i in range(n):
	car = list(input().split())
	if '1' in car or '3' in car:
		continue
	else:
		good.append(i+1)
		num+=1

print(num)
if good:print(*good, sep=' ')
