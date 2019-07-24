n = int(input())
ticket = list(map(int, input()))
if ticket.count(4) + ticket.count(7) == n:
	a = ticket[:n//2]
	b = ticket[n//2:]
	if sum(a) == sum(b):
		print("YES")
		exit()

print("NO")