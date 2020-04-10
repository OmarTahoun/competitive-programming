n = [1,2,3,4,5]

def gen(arr, i, x, j):
	if i == 5:
		print(x)
		return
	
	if j>=5:
		return
	x[i] = arr[j]
	gen(arr, i+1, x, j+1)
	gen(arr, i, x, j+1)

gen(n, 0, [0]*5, 0)

