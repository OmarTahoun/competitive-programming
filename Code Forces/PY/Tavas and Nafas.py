tens = ["twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
ones = ["zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]


n = int(input())
ten = n//10
one = n%10
if n<20:
	print(ones[n])
else:
	if one == 0:
		print(tens[ten-2])
	else:
		print(tens[ten-2] + "-" + ones[one])