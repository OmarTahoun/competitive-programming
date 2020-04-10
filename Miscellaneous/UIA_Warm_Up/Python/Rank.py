n = int(input())
tomas = sum(map(int, input().split()))
t_id = 1
for i in range(n-1):
    score = sum(map(int, input().split()))
    if score > tomas:
        t_id +=1
print (t_id)
