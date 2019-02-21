n = int(input())
line = list(map(int, input().split()))
kamil = line[0]
line = line[1:]
line.sort()
count = 0
while kamil <= line[-1]:
	line[-1] -= 1
	kamil +=1
	count += 1
	line.sort()

print(count)