s = raw_input()

if len(s) == 1:
    print s.swapcase()
elif s.isupper():
    print s.swapcase()
elif s[1:].isupper():
    print s.swapcase()
else:
    print s



