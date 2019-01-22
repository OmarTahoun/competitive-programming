result = []
for i in range(5):
    score = list(raw_input().split(' '))
    score = sum(map(int, score))
    result.append(score) 

print str(result.index(max(result))+1) + " " + str(max(result))





