from math import factorial as fac
def solve(n,m):
	if n ==  1 and m == 1:
		return 2
	return solve(n-1,m)+solve(n, m-1)

n = int(input())
print(solve(n,n))