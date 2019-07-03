n = int(input())

solds = list(map(int, input().split()))

cost_short = 200
cost_long = 200
index_min = None
index_max = None
for i in range(n):
	if solds[i] == min(solds) and abs((i+1)-n)<=cost_short:
		cost_short = abs((i+1)-n)
		index_min = i

	if solds[i] == max(solds) and abs(i-0)<=cost_long:
		cost_long = abs(i-0)
		index_max = i

ans  = (index_max-1)+(n-index_min)
if index_max>index_min:
	ans -= 1
print(ans)

