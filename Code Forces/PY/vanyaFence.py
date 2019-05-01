h = map(int, raw_input().split())[1]
heights = map(int, raw_input().split())
widths = []
for x in heights:
    if x > h:
        widths.append(2)
    else:
        widths.append(1)
print sum(widths)
