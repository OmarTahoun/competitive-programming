n = int(input())
groups = map(int, raw_input().split(' '))
groups.sort(reverse = True)

count = 0
i = 0
j = len(groups)-1
available = 4
while (i<=j):
    count += 1
    available -= groups[i]
    while (groups[j]<=available and i <= j):
        available -= groups[j]
        j -= 1
    i += 1
    available = 4

print count

