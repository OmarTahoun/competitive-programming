#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	vector<string> rats;
	vector<string> woild;
	vector<string> men;
	string captain;

	cin>>n;
	for (int i = 0; i < n; ++i){
		string name, rank;
		cin>>name>>rank;
		if (rank == "rat")
			rats.push_back(name);
		if (rank == "woman" || rank == "child")
			woild.push_back(name);
		if (rank == "man")
			men.push_back(name);
		if (rank == "captain")
			captain = name;
	}

	for (int i = 0; i < (int)rats.size(); ++i)
		cout<<rats[i]<<endl;
	for (int i = 0; i < (int)woild.size(); ++i)
		cout<<woild[i]<<endl;
	for (int i = 0; i < (int)men.size(); ++i)
		cout<<men[i]<<endl;

	cout<<captain<<endl;
	return 0;
}