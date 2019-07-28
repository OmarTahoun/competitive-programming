n, m = map(int, input().split())
students = []
grades = [[] for i in range(m)]
state = [0 for i in range(n)]
for i in range(n):
	student = input()
	students.append(student)
	for j in range(m):
		grades[j].append((int(student[j])))
for i in range(n):
	for j in range(m):
		if int(students[i][j]) == max(grades[j]):
			state[i] = 1

print(sum(state))
