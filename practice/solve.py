#!/usr/bin/python3

import json
import argparse
import shutil
import subprocess

def create_file(id, lang):
	id = id.strip()
	lang = lang.strip()
	problem = problems[int(id.strip())]

	if(lang.lower() == "cpp"):
		file_name = problem[0] +"."+ lang.lower()
		path = r"../Code Forces/CPP/"+file_name
		default_path = r"../Code Forces/CPP/default.cpp"
		shutil.copyfile(default_path, path)
		print(file_name)
		
		
		list_files = subprocess.run(["subl", path], stdout=subprocess.DEVNULL)
	else:
		file_name = problem[0] +"."+ lang.lower()
		path = r"../Code Forces/PY/"+file_name
		print(file_name)
		
		
		list_files = subprocess.run(["subl", path], stdout=subprocess.DEVNULL)

def main():
    parser = argparse.ArgumentParser(description="testing")
    parser.add_argument('-id', dest="id", help = "the id of the problem to update", type = str, required=True)
    parser.add_argument('-l', dest="lang", help = "the Language the problem was solved with", type = str, required=True)
    args = parser.parse_args()

    create_file(args.id, args.lang)

if __name__ == '__main__':
    with open("problems.js", "r") as f:
        problems = json.load(f)

    main()