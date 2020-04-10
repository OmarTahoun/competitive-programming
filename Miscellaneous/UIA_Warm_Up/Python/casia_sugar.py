line = map(int, raw_input().split(' '))
n , s = line[0], line[1]

best = -1
for i in range(n):
    offer = map(int, raw_input().split(' '))
    
    if s*100 < offer[0]*100 + offer[1]:
        continue
    else:
        change = (s*100 - (offer[0]*100+offer[1]))%100
        best = max(change, best)


print best



