correct = [1,1,2,2,2,8]
found =input().split(' ')
res = []

for i in range(len(correct)):
    res.append(correct[i] - int(found[i]))
print(*res, sep=" ")


