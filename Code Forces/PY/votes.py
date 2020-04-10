p, d = map(int , input().split())

votes = {}
for _ in range(p):
	i, a, b = map(int, input().split())
	if i in votes:
		votes[i][0] += a
		votes[i][1] += b
	else:
		votes[i] = [a,b]


V = 0
WA, WB = 0,0
for x in range(1, d+1):
	A, B = votes[x][0], votes[x][1]
	med = ((A+B) // 2)+1
	V += A+B
	if A>B:
		wastedB = B
		wastedA = A - med
		print("A", wastedA, wastedB)
	else:
		wastedA = A
		wastedB = B - med
		print("B", wastedA, wastedB)
	WA += wastedA
	WB += wastedB
egap = abs(WA-WB)/V
print("%.10f" % egap)
