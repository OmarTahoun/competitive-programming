#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> unique;
	int x;
	for(int i = 0; i < 10; i++){
		cin>>x;
		unique.insert(x%42);
	}

	cout<<unique.size()<<endl;
	return 0;
}