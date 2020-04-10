n = int(input())
arr = list(map(int, input().split()))

if arr == sorted(arr):
	print("yes")
	print(1, 1)
else:
	start, end = 0, 0
	for i in range(n-1):
		if arr[i] != arr[i+1]-1:
			start = i
			break

	for i in range(start+1, n):
		if arr[i] != arr[i-1]-1:
			end = i-1
			break
		if i == n-1:
			end = i
	new = arr[:start] + arr[start:end+1][::-1] +arr[end+1:]
	arr.sort()
	if new == arr:
		print("yes")
		print(start+1, end+1)
	else:
		print("no")


