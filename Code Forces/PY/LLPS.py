def get_seq(seq, out=""):
	if len(seq) == 0:
		res.append(out)
		return 0

	get_seq(seq[1:], out)
	get_seq(seq[1:], out+seq[0])

res = []
s = input()
get_seq(s)
palindrome = [x for x in res if x == x[::-1]]
print(sorted(palindrome,reverse=True)[0])