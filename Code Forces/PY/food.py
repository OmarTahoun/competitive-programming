for _ in range(int(input())):
	n = int(input())

	total = 0
	while True:
		total += (n - n%10)
		rem = n // 10
		n -= (n - n%10)
		n += rem

		if n < 10:
			break

	total += n
	print(total)

