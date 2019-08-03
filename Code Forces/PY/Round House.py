n, a, b = map(int, input().split())
gates = list(range(1, n+1))

a = a+b
print(gates[(a%n)-1])