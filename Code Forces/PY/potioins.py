import bisect
n, m, k = map(int, input().split())
x, s = map(int, input().split())

A = [x]+list(map(int, input().split()))
AC = [0]+list(map(int, input().split()))

B = [0]+list(map(int, input().split()))
BC = [0]+list(map(int, input().split()))


time = n * x
for i in range(m+1):
	if AC[i] > s:
		continue
	if AC[i]+BC[0] > s:
		time = min(time, A[i]*n)
		continue

	largest = bisect.bisect_right(BC, s-AC[i]) - 1
	time = min(time, A[i]*(n-B[largest]))

print(time)

