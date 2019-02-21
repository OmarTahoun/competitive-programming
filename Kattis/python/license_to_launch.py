n = int(input())
junk = list(raw_input().split(' '))
junk = map(int, junk)

print junk.index(min(junk))
