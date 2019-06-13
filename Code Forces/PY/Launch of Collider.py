n = int(input())
dirs = input()
pos = list(map(int, input().split()))

times = []
for i in range(len(dirs)-1):
	if dirs[i] == 'R' and dirs[i+1] == 'L':
		times.append((pos[i+1] - pos[i]) / 2)

if times:
	print(int(min(times)))
else:
	print(-1)
				

		
