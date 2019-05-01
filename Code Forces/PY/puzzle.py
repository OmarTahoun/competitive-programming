n = map(int, raw_input().split(' '))[0]
diff = map(int, raw_input().split(' '))
diff.sort()
res = []
for i in range(len(diff)-n+1):
    mini = diff[i:i+n]
    res.append(max(mini) - min(mini))

print min(res)



