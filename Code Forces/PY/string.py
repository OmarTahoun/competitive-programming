for _ in range(int(input())):
	a = list(input())
	b = list(input())
	c = list(input())
	n = len(a)
	cnt = 0

	for i in range(n):
		if a[i] == c[i]:
			tmp = b[i]
			b[i] = c[i]
			c[i] = tmp
			cnt +=1
		elif b[i] == c[i]:
			tmp = a[i]
			a[i] = c[i]
			c[i] = tmp
			cnt+=1
		elif b[i] == c[i] and a[i] == c[i]:
			cnt+=1
			continue
		else:
			break

	if a==b and cnt == n:
		print("YES")
	else:
		print("NO")
