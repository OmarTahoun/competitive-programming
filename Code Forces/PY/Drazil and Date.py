a,b,s = map(int, input().split())

if abs(a)+abs(b) <= s and (s-(abs(a)+abs(b))) % 2 == 0:
	print("YES")
else:
	print("NO")