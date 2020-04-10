voules = ['a','e','i','o','u']
line = input()
res = ""

i=0
while(i<len(line)):
	res+=line[i]
	if line[i] in voules:
		i+=3
	else:
		i+=1

print(res)
