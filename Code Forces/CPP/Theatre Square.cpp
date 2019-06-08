#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, a;
	long long res = 0;
	cin>>n>>m>>a;
	res = (n/a) + (n%a!=0);
	res *= (m/a) + (m%a!=0);

	cout<<res<<endl;
	return 0;
}