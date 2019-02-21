n = int(input())
p = 0.0
for i in range(n):
    q, y = raw_input().split(' ')
    p += float(q) * float(y)


print ("%.3f" %p)

