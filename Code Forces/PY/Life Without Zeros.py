a = input()
b = input()
c = int(a)+int(b)

a_ = ''.join(a.split('0'))
b_ = ''.join(b.split('0'))
c_ = int(a_)+int(b_)
c = int(''.join(str(c).split('0')))
if c == c_:
	print("YES")
else:
	print("NO")