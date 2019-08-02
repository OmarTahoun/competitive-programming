x, y, z = map(int,input().split())

a = ((x*z)//y)**0.5
c = ((z*y)//x)**0.5
b = ((x*y)//z)**0.5

res = int(4*(a+b+c))
print(res)