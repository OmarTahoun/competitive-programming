n = int(input())
queues = map(int, raw_input().split(' '))
time = []
for i in range(n):
    items = map(int, raw_input().split(' '))
    score = sum(items) * 5
    score += 15*queues[i]
    time.append(score)

print min(time)



