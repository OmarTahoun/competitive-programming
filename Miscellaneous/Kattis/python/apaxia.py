name = raw_input()
refactord = ""
refactord += name[0]
for i in range(1,len(name)):
    prev = name[i-1]
    if name[i] == prev:
        continue
    refactord += name[i]
print refactord
