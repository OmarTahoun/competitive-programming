line  = map(int, raw_input().split(' '))
n, k = line[0], line[1]


scores = map(int, raw_input().split(' '))
needed = scores[k-1]
count = 0

for score in scores:
    if score >= needed and score > 0:
        count +=1
print count 
