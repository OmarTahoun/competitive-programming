n = input()
days = map(int, raw_input().split())
count = 0
for day in days:
    if day<0:
        count +=1
print count
