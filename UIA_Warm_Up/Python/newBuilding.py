n, h, a, b, k = map(int, input().split())

res = []
for i in range(k):
    count = 0
    ta, fa, tb, fb = map(int, input().split())
    if ta == tb:
        count += abs(fa-fb)
    else:
        if fa<a:
            count += a-fa+ abs(ta-tb)+abs(a-fb)
        elif fa>b:
            count += fa-b + abs(ta-tb)+abs(b-fb)
        else:
            count += abs(ta-tb) + abs(fa-fb)

    res.append(count)

print(*res, sep='\n')
