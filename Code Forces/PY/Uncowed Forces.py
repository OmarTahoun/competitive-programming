times = list(map(int, input().split()))
wrong = list(map(int, input().split()))
hs, hu = map(int, input().split())
score = 0
x = 500
for i in range(5):
	m = times[i]
	w = wrong[i]

	score += max(0.3*x, (1-m/250)*x - 50*w)
	x+=500

score += hs*100
score -= hu*50
print(int(score))

