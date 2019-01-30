n = int(input())
n_sum = sum(map(int, list(str(n))))
res = -1
while(res == -1):
    if n % n_sum == 0:
        res = n
        break
    n+=1
    n_sum = sum(map(int, list(str(n))))
print n

