n =  int(input())
for i in range(n):
    line = list(input())
    m = line.count("M")
    f = line.count("F")

    if  m == 3 or f == 3:
        print("Yes")
    elif m == 6 or f == 6:
        print("Yes")
    elif m == 10 or f == 10:
        print("Yes")
    else:
        print("No")
