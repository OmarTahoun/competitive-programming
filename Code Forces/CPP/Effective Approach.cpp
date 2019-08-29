#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, x, y;
	long long a=0, b=0;
	map<int, int> order;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x;
		order[x] = i;
	}
	cin>>m;
	for (int i = 0; i < m; ++i){
		cin>>y;
		a += (order[y]-0)+1;
		b += (n-order[y]);
	}

	cout<<a<<" "<<b<<endl;
	return 0;
}