#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main(){
	int n, m, val, q;
	cin>>n>>m;
	vector<int> arr;
	set<int> myset;
	set<int>::iterator it = myset.begin();

	for (int i = 0; i < n; ++i){
		cin>>val;
		arr.push_back(val);
	}
	
	for (int i = 0; i < m; ++i){
		cin>>q;
		advance(it, q);
		arr(*it, myset.end());
		cout<<arr.size();
	}

	return 0;
}