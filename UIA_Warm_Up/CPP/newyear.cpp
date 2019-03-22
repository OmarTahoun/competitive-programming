#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, t, val;
	vector<int> cities;
	cin>>n>>t;
	for (int i = 0; i < n-1; ++i)
	{
		cin>>val;
		cities.push_back(val);
	}

	for (int i = 0; i <n-1; i+=cities[i]){
		if (i+1+cities[i] == t){
			cout<<"YES"<<endl;
			return 0;
		}
	}

	cout<<"NO"<<endl;
	return 0;
}