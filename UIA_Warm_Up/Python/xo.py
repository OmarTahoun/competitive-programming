n = int(input())
results = []
for i in range(n):
    res = []
    line = list(input())
    for k in range(1,13):
        if 12%k ==0:
            a = 12//k
            b = k
            boleh = False
            for l in range(b):
                count = 0
                for j in range(l, 12, b):
                    if  line[j] == 'X':
                        count+=1
                if count == a:
                    boleh = True
            if boleh:
                res.append(str(a) +"x"+str(b))
    results.append(res)


for result in results:
    print(str(len(result)),end=' ')
    print(*result[::-1], sep=" ")


                



