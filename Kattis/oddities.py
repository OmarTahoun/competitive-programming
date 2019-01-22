n = int(input())
res = []
for i in range(n):
    x = int(input())
    if x%2 == 0:
        res.append(str(x) + " is even")
    else:
        res.append(str(x) + " is odd")

for line in res:
    print line



