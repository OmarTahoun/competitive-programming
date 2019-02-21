results = []
n = int(input()) 
while n != -1:
    time_elapsed = 0
    distance = 0
    for i in range(n):
        s, t = raw_input().split(' ')
        distance += int(s) * (int(t) - time_elapsed)
        time_elapsed = int(t)
    results.append(distance)
    n = int(input())

for i in results:
    print str(i)+" miles"







