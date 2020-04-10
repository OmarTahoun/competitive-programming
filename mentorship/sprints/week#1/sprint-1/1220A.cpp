#include <bits/stdc++.h>
using namespace std;
int n;
map<char, int> cnt;
int main(){
	cin>>n;
	string line;
	cin>>line;
	for (int i = 0; i < n; ++i)
		cnt[line[i]]++;

	for (int i = 0; i < cnt['n']; ++i){
		cout<<1<<" ";
	}
	for (int i = 0; i < cnt['z']; ++i){
		cout<<0<<" ";
	}
	cout<<endl;
	return 0;
}