s = list(raw_input())
cups = [1,0,0]

for c in s:
    if c == 'A':
        cups[0], cups[1] = cups[1], cups[0]
    elif c == 'B':
        cups[1], cups[2] = cups[2], cups[1]
    elif c == 'C':
        cups[0], cups[2] = cups[2], cups[0]


print cups.index(1)+1




