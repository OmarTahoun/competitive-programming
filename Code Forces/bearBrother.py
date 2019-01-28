line = map(int, raw_input().split())
a, b = line[0], line[1]
count = 0
while a<=b:
    a = a*3
    b = b*2
    count +=1
print count

