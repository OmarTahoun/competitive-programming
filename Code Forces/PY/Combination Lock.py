n = int(input())
org = list(map(int, input()))
need = list(map(int, input()))
moves = 0
for i in range(n):moves += min(abs(org[i]-need[i]), 10-abs(org[i]-need[i]))
print(moves)