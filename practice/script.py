# The script i made to extract the problems and their URLs from the csv file
import csv

# Reading problems from csv file
with open("A-problems.csv", 'r') as data:
	lines = csv.reader(data)
	dataset = list(lines)


# Getting the CodeForces problems
problems = []
for problem in dataset:
    if problem[1][:2] == "CF":
        # Extracting the problem information
        problemID = problem[1][2:]
        contest_id, problem_id = problemID.split("-")[0], problemID.split("-")[1]

        # Constructing the URL
        url = "http://codeforces.com/contest/"+str(contest_id)+"/problem/"+str(problem_id)
        problems.append([problem[0], url])


# Writting the Data to the MarkDown file
file = open("A-problems.md", "a")
for i in range(len(problems)):
    line = "| "+str(i)+" | A - ["+problems[i][0]+"]("+problems[i][1]+") | :x: | - | - |\n"
    file.write(line)
