#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, val;
	cin>>n;
	map<int, int> mp;
	set<int>st;
	for (int i = 0; i < n; ++i){
		cin>>val;
		++mp[val];
		st.insert(val);
	}

	for (int i = 0; i < (int)st.size(); ++i)
		if (mp[st[i]] > (n+1)/2){
			cout<<"NO"<<endl;
			return 0;
		}

	cout<<"YES"<<endl;
	return 0;
}