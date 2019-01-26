line = input()
if len(line) > 2:
    line = line[1:-1]
    chars = set(line.split(', '))
    print (len(chars))
else:
    print (0)

