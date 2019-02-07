k = int(input())
months = map(int, raw_input().split(' '))

months.sort(reverse = True)

total = 0
count = 0
if k > 0:
    for month in months:
        total += month
        count += 1
        if total >= k:
            break
    if total<k:
        count = -1
print count
