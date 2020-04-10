#include <iostream>

using namespace std;

int main(){
	string a[21], b[21];
	int n , m;
	cin>>n>>m;

	for (int i = 0; i < n; ++i)
		cin>>a[i];
	for (int i = 0; i < m; ++i)
		cin>>b[i];

	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		int year;
		cin>>year;
		year--;
		cout<<a[year%n]<<b[year%m]<<endl;
	}
}