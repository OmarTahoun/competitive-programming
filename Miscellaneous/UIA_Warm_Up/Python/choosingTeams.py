line = map(int, raw_input().split())
n, k = line[0], line[1]
count = 0

students = map(int, raw_input().split(' '))
students = [x+k for x in students]
allowed= []

for x in students:
    if x <= 5:
        allowed.append(x)

count = len(allowed)/3
print count
