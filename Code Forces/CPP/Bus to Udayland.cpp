#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string lines[1001];
	bool done = false;
	bool found = false;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>lines[i];
		for (int j = 0; j < 5; ++j)
			if (lines[i][j]==lines[i][j+1] && lines[i][j]=='O')
				found = true;
	}

	if(found){
		cout<<"YES"<<endl;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < 5; ++j)
				if (lines[i][j]==lines[i][j+1] && lines[i][j]=='O' && !done){
					done = true;
					cout<<"++";
					j+=1;
				}
				else
					cout<<lines[i][j];
			cout<<endl;
			}
		}
	else
		cout<<"NO"<<endl;
	return 0;
}