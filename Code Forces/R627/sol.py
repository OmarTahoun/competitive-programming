ans = []
def solve(x, i):
	if(len(x) >= 3 and x == x[::-1]):
		ans.append(1)
		return
	if i==n:
		if(len(x) >= 3 and x == x[::-1]):
			ans.append(1)
		return

	c = nums[i]
	solve(x, i+1)
	solve(x+c, i+1)
	

for _  in range(int(input())):
	x = ""
	nums = []
	ans = []
	n = int(input())
	nums = list(input().split())
	solve("", 0)
	if(len(ans) > 0):
		print("YES")
	else:
		print("NO")