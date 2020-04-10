"""
1. Given T = "2?:?8", the function should return "23:58".

2. Given T = "?8:4?", the function should return "18:49".

3. Given T = "??:??", the function should return "23:59".

4. Given T = "06:34", the function should return "06:34".
"""
T = input()
T = list(T)
if T[0] == '?':
	if T[1] == '?':
		T[0] = "2"
		T[1] = "3"
	elif T[1] > '3':
		T[0] = "1"
	elif T[1] <= "3":
		T[0] = "2"
if T[0] == "1" and T[1] == "?":
	T[1] = '9'
if T[0] == "2" and T[1] == "?":
	T[1] = '3'

if T[3] == "?":
	T[3] = "5"
if T[4] == "?":
	T[4] = "9"

print(T)