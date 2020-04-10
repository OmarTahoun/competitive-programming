n = int(input())
arr = list(map(int, input().split()))

i = 1
j = 0
count = 0
while True:
	if arr == sorted(arr):
		break
	if arr[j] == i:
		if j == i-1:
			j+=1
			i+=1
			continue
		tmp = arr[i-1]
		arr[i-1] = i
		arr[j] = tmp
		j = i-1
		i+=1
		count += 1
	j+=1
print(count)



