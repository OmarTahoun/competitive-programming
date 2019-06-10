n, k = map(int, input().split())
b = {str(i) for i in range(k+1)}
print(b)
cnt = 0
for i in range(n):
    a = set(input())
    print(a)
    if a >= b: cnt += 1

print(cnt)