n = raw_input().split(' ')
cost = int(n[0])
num = int(n[2])
avail = int(n[1])

total = cost*(num*(num+1)/2)
if total>avail:
    print total - avail
else:
    print 0
