n = raw_input()
lucky = (int(n[0])+1) * (10 ** (len(n)-1))
print lucky-int(n)
