n = int(input())
test_cases = []
for i in range(n):
    test_case = []
    a = raw_input()
    b = raw_input()
    res = ''
    for i in range(len(a)):
        if a[i] == b[i]: res+= '.'
        else: res+= '*'
    test_case.append(a)
    test_case.append(b)
    test_case.append(res)
    test_cases.append(test_case)

for case in test_cases:
    for line in case:
        print line
    print 


