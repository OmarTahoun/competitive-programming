def check(line):
	return sum([line.count('o'), line.count('a'), line.count('e'), line.count('i'), line.count('u')])

first = check(input())
second = check(input())
third = check(input())

if first != 5 or second != 7 or third !=5:
	print("NO")
else:
	print("YES")



