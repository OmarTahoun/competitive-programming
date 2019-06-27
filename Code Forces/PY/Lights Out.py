lights = [[0]*5]*5

for i in range(1,4):
	x = list(map(int, input().split()))
	for j in range(1,4):
		lights[i][j]+= x[]
		lights[i+1][j]+= x[j-1]
		lights[i-1][j]+= x[j-1]
		lights[i][j+1]+= x[j-1]
		lights[i][j-1]+= x[j-1]
print(lights)
for i in range(1,4):
	for j in range(1,4):
		if lights[i][j] % 2 == 0:
			print(1, end='')
		else:
			print(0, end='')
	print()