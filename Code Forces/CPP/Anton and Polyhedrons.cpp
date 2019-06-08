#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long total = 0;
	string shape;
	map<char, int> mp = {{'T',4}, {'C', 6}, {'O', 8}, {'D',12}, {'I', 20}};
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>shape;
		total+= mp[shape[0]];
	}
	cout<<total<<endl;
	return 0;
}