s = raw_input().lower()
n = len(s)
per_len = n / 3
per = "per"*per_len
count = 0
for i in range(len(s)):
    if s[i] == per[i]:continue
    else: count += 1
print count
