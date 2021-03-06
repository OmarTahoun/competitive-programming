# The script i made to extract the problems and their URLs from the csv file
import csv
import json

# Reading problems from csv file
with open("B Questions List.csv", 'r') as data:
	lines = csv.reader(data)
	dataset = list(lines)


# Getting the CodeForces problems
problems = []
for problem in dataset:
    if problem[1][:2] == "CF":
        # Extracting the problem information
        problemID = problem[1][2:]
        contest_id, problem_id = problemID.split("-")[0], problemID.split("-")[2]

        # Constructing the URL
        url = "http://codeforces.com/contest/"+str(contest_id)+"/problem/"+str(problem_id)
        problems.append([problem[0], url, ":x:","-","-"])

with open("problems.js", "w") as problems_file:
    json.dump(problems, problems_file)
# Writting the Data to the MarkDown file
file = open("B Questions.md", "a")
for i in range(len(problems)):
    line = "| "+str(i)+" | B - ["+problems[i][0]+"]("+problems[i][1]+") | :x: | - | - |\n"
    file.write(line)
