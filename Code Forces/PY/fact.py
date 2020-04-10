def cnt(n):
	count = 0
	x = 5

	while(n//x >= 1):
		count += n//x
		x *= 5

	return count


def bs(m):
	l, r = 0, 5*m

	while l<=r:
		mid = (r+l)//2

		if cnt(mid) < m:
			l = mid+1
		else:
			ans = mid
			r = mid-1

	return ans

m = int(input())
print(bs(m))