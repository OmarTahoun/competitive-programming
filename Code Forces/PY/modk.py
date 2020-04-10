def check(arr, i, n, total, k):
	if(i>n):
		if total % k == 0 and total != 0:
			print("YES")
			exit()
		return

	check(arr, i+1, n, total+arr[i], k)
	check(arr, i+1, n, total, k)

n, k = map(int, input().split())
nums = list(map(int, input().split()))
check(nums, 0, n-1, 0, k)
print("NO")
