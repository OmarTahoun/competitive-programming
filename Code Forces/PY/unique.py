for i in range(int(input())):
	n = int(input())
	guests = list(map(int, input().split()))

	res = 0
	for guest in guests:
		res ^= guest
	print("Case #" + str(i+1) + ": " + str(res))