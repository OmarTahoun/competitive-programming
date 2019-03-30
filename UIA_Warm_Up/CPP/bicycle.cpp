#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n, m, val;
	vector<int> a;
	vector<int> ratio;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>val;
		a.push_back(val);
	}

	cin>>m;
	for (int i = 0; i < m; ++i){
		cin>>val;
		for (int i = 0; i < n; ++i)
			if (val%a[i] == 0){
				ratio.push_back(val/a[i]);
			}
	}

	sort(ratio.begin(), ratio.end());
	cout<<count(ratio.begin(), ratio.end(), ratio[ratio.size()-1])<<endl;
	return 0;
}