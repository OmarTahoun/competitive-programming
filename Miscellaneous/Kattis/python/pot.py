n = int(input())

total = 0
for i in range(n):
    p = int(input())
    num = p/10
    pw = p%10
    total += num ** pw

print total

