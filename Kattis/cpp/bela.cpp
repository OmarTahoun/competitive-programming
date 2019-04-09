#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total=0;
	char b;
	cin>>n>>b;
	string val;
	map<char,pair<int,int>> cards;
	cards['A'] = {11, 11};
	cards['K'] = {4, 4};
	cards['Q'] = {3, 3};
	cards['J'] = {20, 2};
	cards['T'] = {10, 10};
	cards['9'] = {14, 0};
	cards['8'] = {0, 0};
	cards['7'] = {0, 0};
	for (int i = 0; i < 4*n; ++i){
		cin>>val;
		if (val[1] == b)
			total += cards[val[0]].first;
		else
			total += cards[val[0]].second;
	}

	cout<<total<<endl;
	return 0;
}