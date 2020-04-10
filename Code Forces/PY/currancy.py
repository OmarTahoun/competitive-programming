n = int(input())
d = int(input())
e = int(input())
num_euros = 0;
ans = n
while(num_euros*5*e <= n):
	ans = min(ans, (n-num_euros*5*e)%d)
	num_euros+=1
print(ans)