n = int(input())
l,r = [None]*10001,[None]*10001

for i in range(n):
	l[i],r[i] = map(int, input().split())


print(min(l.count(1), l.count(0))+ min(r.count(1), r.count(0)))