n = int(input())

for i in range(n):
    for j in range(n-i):
        print(' ', end=' ')
    for k in range(i):
        print(k, end=' ')
    for l in range(i, -1, -1):
        if l == 0:
            print(l, end='')
        else:
            print(l, end=' ')

    print()

for i in range(n,-1,-1):
    for j in range(i,n):
        print(' ', end=' ')
    
    for k in range(0, i):
        print(k, end=' ')

    for l in range(i, -1, -1):
        if l == 0:
            print(l, end='')
        else:
            print(l, end=' ')

    print()
