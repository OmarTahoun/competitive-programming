h, m = raw_input().split(' ')
h, m = int(h), int(m)


if m >= 45:
    m = m-45
else:
    if h == 0:
        h = 24
    left  = 45 - m
    h = h-1
    m = 60 - left

print str(h)+" "+str(m)

