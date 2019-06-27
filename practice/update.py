#!/usr/bin/python3

import json
import argparse

def update(id, status, lang, count, notes):
    id = id.strip()
    status = status.strip()
    count = count.strip()
    notes = notes.strip()

    problem = problems[int(id.strip())]
    problem[2] = status
    problem[3] = count
    problem[4] = notes

    if lang.lower() == "cpp":
        dir = "CPP"
    else:
        dir = "PY"

    if status == "AC":
        file_name = "%20".join(problem[0].split(" "))
        print(file_name)
        url = "../Code&#32;Forces/"+dir+"/"+file_name+"."+lang.lower()
        problem[2] = "[✔️]("+url+")"

def update_file():
    # Writting the Data to the MarkDown file
    file = open("Extra-A-problems.md", "w")
    file.write("## CodeForces A - Div2. problems for practicing\n")
    file.write("| # | Problem  | Status | Submission Count | Notes |\n")
    file.write("| --- | --- | --- | --- | --- |\n")

    for i in range(len(problems)):
        line = "| "+str(i)+" | A - ["+problems[i][0]+"]("+problems[i][1]+") | "+problems[i][2]+" | "+problems[i][3]+" | "+problems[i][4]+" |\n"
        file.write(line)


def main():
    parser = argparse.ArgumentParser(description="testing")
    parser.add_argument('-id', dest="id", help = "the id of the problem to update", type = str, required=True)
    parser.add_argument('-s', dest="status", help = "the Status of the problem AC", type = str, required=True)
    parser.add_argument('-l', dest="lang", help = "the Language the problem was solved with", type = str, required=True)
    parser.add_argument('-c', dest="count", help = "Number of submissions it took to solve the problem", type = str, required=True)
    parser.add_argument('-m', dest="notes", help = "Notes on the submission", type = str, required=True)
    args = parser.parse_args()

    update(args.id, args.status, args.lang, args.count, args.notes)
    update_file()
    with open("problems.js", "w") as problems_file:
        json.dump(problems, problems_file)

if __name__ == '__main__':
    with open("problems.js", "r") as f:
        problems = json.load(f)
    main()
