#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string team;
	map<string, int>teams;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>team;
		teams[team]+=1;
	}

	cout<<max(teams)<<endl;
	return 0;
}