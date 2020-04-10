n, h, v = map(int, input().split())

a = h*v
b = h*(n-v)
c = (n-h)*v
d = (n-h)*(n-v)

print(max([a,b,c,d])*4)