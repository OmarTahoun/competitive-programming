alpha = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
def gen(s, k, n):
	end = n-k+1
	for i in range(0, end, 1):
		s[i:k+i] = s[i:k+i][::-1]
	return ''.join(s)

for _ in range(int(input())):
	n = int(input())
	s = input()
	ans = []
	for c in alpha:
		if c in s:
			for i in range(n):
				if s[i] == c:
					res = gen(list(s), i+1, n)
					ans.append([res, i+1])
			break
	ans.sort()
	print(ans[0][0])
	print(ans[0][1])