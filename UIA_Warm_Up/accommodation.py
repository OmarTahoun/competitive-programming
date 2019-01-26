n = int(input())
available = 0
for i in range(n):
    line = map(int, raw_input().split(' '))
    p, q = line[0], line[1]
    if q - p >=2:
        available +=1

print available

