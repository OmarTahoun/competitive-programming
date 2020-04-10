import math
global dp
dp = [[-1]*100005]*100005

def check(x):
	r = math.sqrt(x)
	return ((r-math.floor(r))==0)

def solve(i, cnt, total):
	print(cnt, total, nums[i])
	if i>=n: 
		if(check(total)):
			return cnt
		return 100005
	if dp[i][cnt] != -1: return dp[i][cnt]

	dp[i][cnt] = 100005
	
	notake = solve(i+1, cnt, total)
	take = solve(i+1, cnt+1, total*nums[i])
	
	dp[i][cnt] = min(notake, take)
	return dp[i][cnt]

n = int(input())
nums = list(map(int, input().split()))
res = solve(0,0,1)
if(res !=100005):
	print(res)
else:
	print(-1)