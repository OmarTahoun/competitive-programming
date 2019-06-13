#include <bits/stdc++.h>
using namespace std;

int main(){
	string lines[4];
	for (int i = 0; i < 4; ++i)
		cin>>lines[i];

	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j){
			map<char, int> mp;
			++mp[lines[i][j]];
			++mp[lines[i][j+1]];
			++mp[lines[i+1][j]];
			++mp[lines[i+1][j+1]];

			if (mp['#'] > 2 || mp['.'] > 2){
				cout<<"YES"<<endl;
				return 0;
			}
		}

	cout<<"NO"<<endl;
	return 0;
}