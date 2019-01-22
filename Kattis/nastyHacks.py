n = int(input())
res = []
for i in range(n):
    case  = list(raw_input().split(' '))
    case  = map(int, case)
    if case[0]<case[1]-case[2]:
        res.append("advertise")
    elif case[0] == case[1]-case[2]:
        res.append("does not matter")
    else:
        res.append("do not advertise")

for line in res:
    print line

