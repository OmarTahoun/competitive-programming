a = list(raw_input())
b = list(raw_input())

x = list(raw_input())

flag = True
if len(x) == len(a) + len(b):
    for char in a:
        if char in x:
            x.remove(char)
            continue
        else:
            flag = False
            break
    for char in b:
        if char in x:
            x.remove(char)
            continue
        else:
            flag = False
            break    
else:
    flag = False

if flag == True: print "YES"
else: print "NO"



