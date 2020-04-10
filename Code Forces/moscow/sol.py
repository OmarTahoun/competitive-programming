n = int(input())
s = input()

if n%2:
	exit(print(-1))

total = 0
i = 0
while(i<n-1):
	if s[i] == '(' and s[i+1] == ')':
		i+=2
		continue

	total += 2
	i+=2

print(total)