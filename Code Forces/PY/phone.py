for _ in range(int(input())):
	n = int(input())
	num = input()
	while(num[0] != "8" and len(num) >11):
		num = num[1:]

	if num[0] == "8" and len(num)>=11:
		print("YES")
	else:
		print("NO")