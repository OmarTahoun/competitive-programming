line = map(int, raw_input().split(' '))
n, m = line[0], line[1]

count = 1
available = m
groups = map(int, raw_input().split(' '))

for i in range(len(groups)):
    if available >= groups[i]:
        available -= groups[i]
    else:
        available = m
        available -= groups[i]
        count += 1

print count



