n = int(input())
res = ''
while(n>0):
    if n % 2 != 0:
        res += '1'
    else:
        res += '0'
    n = n//2

print(int(res, 2))
