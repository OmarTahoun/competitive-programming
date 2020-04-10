n = int(input())

nums = list(map(int, input().split()))

vec = [[nums[i], i] for i in range(n)]

vec.sort()

ans = -1
for i in range(n):
    if(vec[i][1] == i): 
        continue
    
    else:
    	vec[i][0], vec[vec[i][1]][0] = vec[vec[i][1]][0], vec[i][0]
    	vec[i][1], vec[vec[i][1]][1] = vec[vec[i][1]][1], vec[i][1] 
    if(i != vec[i][1]): 
    	i -= 1
    ans += 1
print(ans)