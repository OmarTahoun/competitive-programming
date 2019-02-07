line = map(int, raw_input().split(' '))
n , k = line[0], line[1]

middle = (n+1)/2
if k <=  middle:
    print k*2 - 1
else:
    print (k - middle)*2


