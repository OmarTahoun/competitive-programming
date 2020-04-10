#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b){
	if (a.first != b.first)
		return a.first<b.first;
	return a.second>b.second;
}

int main(){
	int s, n;
	pair<int, int> powers[1000];
	cin>>s>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>powers[i].first>>powers[i].second;
	}
	
	sort(powers, powers+n, cmp);

	for (int i = 0; i < n; ++i)
	{
		if (s <= powers[i].first){
			cout<<"NO"<<endl;
			return 0;
		}
		s += powers[i].second;

	}

	cout<<"YES"<<endl;
	return 0;
}