L = int(input())
D = int(input())
x = int(input())

def digits(n):
    total = 0
    while n>0:
        total += n % 10
        n /= 10
    return total

for i in range(L, D+1):
    if digits(i) == x:
        print i
        break

for j in range(D,L-1, -1):
    if digits(j) == x:
        print j
        break


