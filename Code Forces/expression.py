a = int(input())
b = int(input())
c = int(input())

res = []
res.append(a+b+c)
res.append(a*b*c)
res.append(a*b+c)
res.append(a+b*c)
res.append((a+b)*c)
res.append(a*(b+c))

print max(res)

