a = input()
b = input()
diff = []
if len(a) != len(b):
    print("NO")
    exit()

for i in range(len(a)):
    if a[i] != b[i]:
        diff.append(a[i])
        diff.append(b[i])


if len(diff) == 4 and diff[0] == diff[3] and diff[1] == diff[2]:
    print("YES")
elif len(diff) == 0:
    if len(set(a)) != len(a):
        print("YES")
    else:
        print("NO")
else:
    print("NO")


