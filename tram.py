n = input()
capacity = 0
current = 0
new = 0
for i in range(n):
    line= raw_input().split(' ')
    new = int(line[1])
    current += new - int(line[0])
    if current >= capacity:
        capacity = current
print capacity
