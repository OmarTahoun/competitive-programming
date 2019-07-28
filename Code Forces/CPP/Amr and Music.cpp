#include <bits/stdc++.h>
using namespace std;

int main(){
	int instrument, n, k, count=0;
	vector<pair<int, int>> instruments;
	cin>>n>>k;
	for (int i = 0; i < n; ++i){
		cin>>instrument;
		instruments.push_back(make_pair(instrument, i+1));
	}
	sort(instruments.begin(), instruments.end());

	for (int i = 0; i < n; ++i){
		if (k<=0 || instruments[i].first>k)
			break;
		
		k-=instruments[i].first;
		count+=1;
	}

	cout<<count<<endl;
	for (int i = 0; i < count; ++i)
		cout<<instruments[i].second<<" ";
	return 0;
}