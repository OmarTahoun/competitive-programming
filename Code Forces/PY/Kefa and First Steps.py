n = int(input())
lengths = []
seq = list(map(int, input().split()))
length = 1
for i in range(n-1):
	if seq[i]<=seq[i+1]:
		length +=1
	else:
		lengths.append(length)
		length = 1
lengths.append(length)
print(max(lengths))
