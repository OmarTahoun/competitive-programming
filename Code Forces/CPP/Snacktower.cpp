#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int next = n;
	int val;
	set<int>s;
	for (int i = 0; i < n; ++i){
		cin>>val;
		s.insert(val);
		while(s.count(next) > 0){
			cout<<next<<" ";
			next-=1;
		}
		cout<<endl;
	}


	return 0;
}