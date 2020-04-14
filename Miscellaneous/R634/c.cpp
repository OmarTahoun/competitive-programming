#include <bits/stdc++.h>
using namespace std;

// bool can(int x);

int arr[200005];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		map<int, int> freq;
		set<int> u;
		cin>>n;
		for (int i = 0; i < n; ++i){
			int a;
			cin>>a;
			u.insert(a);
			freq[a] ++;
		}

		int x, y = 0;
		x = u.size();
		for (auto const& t:freq){
			if(t.second > y)
				y = t.second;
		}

		cout<<max(min(y-1, x), min(y, x-1))<<endl;
	}
	return 0;
}