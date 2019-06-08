#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string line;
	set<char>chars;
	set<char>diag;
	bool flag = false;
	for (int i = 0; i < n; ++i){
		cin>>line;
		for (int j = 0; j < n; ++j)
			if (j != i && j != (n-1)-i)
				chars.insert(line[j]);
			else
				diag.insert(line[j]);
		if (chars.size()!=1 || diag.size() != 1 || chars == diag)
			flag = true;
	}

	if (flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}