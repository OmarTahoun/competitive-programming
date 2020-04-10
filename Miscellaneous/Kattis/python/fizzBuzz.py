line = map(int, raw_input().split())
x, y, n = line[0], line[1], line[2]
for i in range(1, n+1):
    output = ""
    if i % x == 0:
        output += "Fizz"
    if i % y == 0:
        output += "Buzz"

    if output:
        print output
    else:
        print i

    
