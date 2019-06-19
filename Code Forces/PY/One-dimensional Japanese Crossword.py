n = int(input())
line = list( len(x) for x in input().split('W') if x)
print(len(line))
if len(line)>0:print(*line, sep=' ')