#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p, a;
	set<int>levels;
	cin>>n;
	cin>>p;
	for (int i = 0; i < p; ++i){
		cin>>a;
		levels.insert(a);
	}
	cin>>p;
	for (int i = 0; i < p; ++i){
		cin>>a;
		levels.insert(a);
	}

	if (levels.size() == n) cout<<"I become the guy."<<endl;
	else cout<<"Oh, my keyboard!"<<endl;
	return 0;
}