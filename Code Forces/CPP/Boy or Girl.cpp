#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	map<char, bool> mp;
	int total = 0;
	for (int i = 0; i < a.size(); ++i){
		if (mp[a[i]])
			continue;
		else{
			mp[a[i]] = 1;
			total+=1;
		}
	}

	if(total%2==0) cout<<"CHAT WITH HER!"<<endl;
	else cout<<"IGNORE HIM!"<<endl;
	return 0;
}