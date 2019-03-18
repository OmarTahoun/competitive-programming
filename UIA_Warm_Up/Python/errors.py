n = input()
errors = list(map(int, input().split()))
for i in range(2):
     new = list(map(int, input().split()))
     print(sum(errors)-sum(new))
     errors = new

     

