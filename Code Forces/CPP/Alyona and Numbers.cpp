#include <bits/stdc++.h>
using namespace std;

long long n, m, x[5], y[5];
int main(){
	// THIS is The correct solution :)
	cin>>n>>m;
	long long count = 0;
	for (int i = 1; i <=n; ++i)
		x[i%5] += 1;
	
	for (int i = 1; i <=m; ++i)
		y[i%5] += 1;

	count += x[0]*y[0];
	count += x[1]*y[4];
	count += x[2]*y[3];
	count += x[3]*y[2];
	count += x[4]*y[1];

	cout<<count<<endl;
	return 0;
}