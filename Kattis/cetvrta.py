x = set()
y = set()
for i in range(3):
    cords = map(int, raw_input().split())
    if cords[0] in x:
        x.remove(cords[0])
    else:
        x.add(cords[0])

    if cords[1] in y:
        y.remove(cords[1])
    else:
        y.add(cords[1])

print x.pop(), y.pop()

