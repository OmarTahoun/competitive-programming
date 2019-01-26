n =  int(input())
x = 0


y = 0
z = 0

for i in range(n):
    a,b,c = raw_input().split(' ')
    x+= int(a)
    y+= int(b)
    z+= int(c)

if x == 0 and y == 0 and z == 0:
    print "YES"
else:
    print"NO"
