n = int(input())
num = list(map(int, list(input())))
part_a = sorted(num[:n])
part_b = sorted(num[n:])

if part_a[0]<part_b[0]:
	for i in range(n):
		if part_a[i]>= part_b[i]:
			print("NO")
			exit()

else:
	for i in range(n):
		if part_b[i]>= part_a[i]:
			print("NO")
			exit()

print("YES")

