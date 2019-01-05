n = input()
s = raw_input()

prev = s[0]
count = 0
for char in s[1:]:
    if char == prev:
        count+=1
    else:
        prev = char
print(count)
