num = input()
num = "00"+num

for i in range(len(num)-2):
	for j in range(i+1, len(num)-1):
		for k in range(j+1, len(num)):
			val = int(num[i]+num[j]+num[k])
			if val%8 == 0:
				print("YES")
				print(val)
				exit()

print("NO")

