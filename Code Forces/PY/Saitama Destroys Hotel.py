n ,s = map(int, input().split())
time = s
for i in range(n):
	f, t = map(int, input().split())
	time = max(time, f+t)
print(time)
