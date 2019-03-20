n = int(input())

p = list(map(int, input().split()))
p = p[1:]

q = list(map(int, input().split()))
q = q[1:]
q.extend(p)
q = set(q)

total = (n*(n+1))/2

if sum(q) == total:
	print("I become the guy.")
else:
	print("Oh, my keyboard!")



