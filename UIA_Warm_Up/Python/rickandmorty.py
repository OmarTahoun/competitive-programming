a, b = map(int, input().split())
c, d = map(int, input().split())

for x in range(101):
    y = (b + a*x - d) * 1.0/c

    if y % 1 == 0 and y >= 0:
        print (b+a*x)
        exit()
print ("-1")
