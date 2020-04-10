n , m = map(int, input().split())
left = False
for i in range(n):
	for j in range(m):
		if i % 2 != 0:
			if j == m-1:
				if left:
					
				pass
			print(".", end='')
		else:
			print('#', end='')
	print()