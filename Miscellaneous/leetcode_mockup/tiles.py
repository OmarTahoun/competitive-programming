def gen(i, s):
	if(len(s) == len(letters) or i >= len(letters)):
		print(s)
		return
	
	gen(i+1, s+letters[i])
	gen(i+1, s)
	print(s)

letters = list(input())
gen(0, "")
