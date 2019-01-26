n = int(input())
substring = list(raw_input())
for i in range(n-1):
    phone = list(raw_input())
    for j in range(len(substring)):
        if substring[j] == phone[j]:
            continue
        else:
            substring = substring[:j]
            break
print len(substring)


