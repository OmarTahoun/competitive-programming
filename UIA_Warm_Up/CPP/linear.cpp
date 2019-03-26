#include <iostream>
#include <map>
using namespace std;

int main(){
	long long n, m,val, counta=0, countb=0;
	map<long, long> a;
	cin>>n;
	for (long i = 0; i < n; ++i){
		cin>>val;
		a[val] = i;
	}


	cin>>m;
	for (long i = 0; i < m; ++i){
		cin>>val;
		counta += a[val]+1;
		countb += n-a[val];
	}


	cout<<counta<<" "<<countb<<endl;
	return 0;
}