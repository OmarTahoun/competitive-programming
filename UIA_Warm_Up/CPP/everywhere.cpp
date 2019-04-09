#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	int t, n;
	string val;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		set<string> cities;
		for (int i = 0; i < n; ++i){
			cin>>val;
			cities.insert(val);
		}
		cout<<cities.size()<<endl;
	}
	return 0;
}