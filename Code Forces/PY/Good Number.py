n, k = map(int, input().split())
b = {str(i) for i in range(k+1)}
b = set(b)
cnt = 0
for i in range(n):
    a = set(input())
    if b.issubset(a):
    	cnt += 1

print(cnt)