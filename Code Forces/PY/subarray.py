n = [1,4,3,2,5]

k = 3

subarrays = []
for i in range((len(n)-k)+1):
	subarrays.append(n[i:i+k])

subarrays.sort()
print(subarrays[-1])
