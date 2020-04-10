for _ in range(int(input())):
	flag = False
	word = list(input())
	word.sort()
	for i in range(1,len(word)):
		if(ord(word[i])- ord(word[i-1])) != 1:
			flag = True
			break
	if not flag:
		print("Yes")
	else:
		print("No")

