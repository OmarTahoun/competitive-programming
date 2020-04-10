indecies = {
    '1':[0,0],
    '2':[0,1],
    '3':[0,2],
    '4':[1,0],
    '5':[1,1],
    '6':[1,2],
    '7':[2,0],
    '8':[2,1],
    '9':[2,2],
    '0':[3,1],
}
canlah = set()
for i in range(1, 201):
    s = str(i)
    Flag = False
    for j in range(1, len(s)):
        x, y = indecies[s[j]]
        x1, y1 = indecies[s[j-1]]
        if x < x1 or y < y1:
            Flag = True
            break
    if not Flag:
        canlah.add(i)

n = int(input())
for _ in range(n):
    m = int(input())
    if m in canlah:
        print(m)
        continue
    i = 1
    while True:
        if m-i in canlah:
            print(m-i)
            break
        if m+i in canlah:
            print(m+i)
            break
        i += 1