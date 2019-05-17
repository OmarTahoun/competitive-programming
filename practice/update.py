import json

with open("problems.js", "r") as f:
    problems = json.load(f)

id, status, lang, count, notes = input().split("/")

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
        url = "../Code&#32;Forces/"+dir+"/"+problem[0]+"."+lang.lower()
        problem[2] = "[✔️]("+url+")"

def update_file():
    # Writting the Data to the MarkDown file
    file = open("A-problems.md", "w")
    file.write("## CodeForces A - Div2. problems for practicing\n")
    file.write("| # | Problem  | Status | Submission Count | Notes |\n")
    file.write("| --- | --- | --- | --- | --- |\n")
    
    for i in range(len(problems)):
        line = "| "+str(i)+" | A - ["+problems[i][0]+"]("+problems[i][1]+") | "+problems[i][2]+" | "+problems[i][3]+" | "+problems[i][4]+" |\n"
        file.write(line)

update(id, status, lang, count, notes)
update_file()
