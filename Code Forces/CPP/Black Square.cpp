#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> mp;
	int total= 0;
	int val;
	for (int i = 1; i < 5; ++i){
		cin>>val;
		mp[i] = val;
	}
	string word;
	cin>>word;
	for (int i = 0; i < (int)word.size(); ++i)
		total += mp[word[i]-'0'];

	cout<<total<<endl;
	return 0;
}