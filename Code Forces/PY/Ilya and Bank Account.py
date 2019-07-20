n = int(input())
a = int(str(n)[:-1])
b = int(str(n)[:-2] + str(n)[-1])
print(max(n,a,b))
