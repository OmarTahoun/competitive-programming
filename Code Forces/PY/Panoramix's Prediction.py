n, m = map(int,input().split())
primes = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]
if m in primes and primes.index(n)+1 == primes.index(m):
	print("YES")
else:
	print("NO")