#include <bits/stdc++.h>
using namespace std;


long long n;
int m;
pair<long long , int> boxes[22];

bool comp(const pair<long long, int>& lhs, const pair<long long, int>& rhs){
	if(lhs.second == rhs.second)
		return lhs.first > lhs.first;
	return lhs.second > rhs.second;
}
int main(){
	cin>>n>>m;
	for (int i = 0; i < m; ++i){
		int a, b;
		cin>>a>>b;
		boxes[i] = {a, b};
	}

	sort(boxes, boxes+m, comp);

	int matches = 0;
	for(int i = 0; i < m; ++i){
		if(n<=0)
			break;
		if(n >= boxes[i].first){
			matches += boxes[i].first * boxes[i].second;
			n -= boxes[i].first;
		}else{
			matches += n * boxes[i].second;
			n = 0;
		}
	}

	cout<<matches<<endl;
	return 0;
}