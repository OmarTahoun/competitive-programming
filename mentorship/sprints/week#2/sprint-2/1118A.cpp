#include <bits/stdc++.h>
using namespace std;

long long n;
int a, b;
int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>a>>b;
		long long total = 0;
		long long twos = (n / 2) * min(2 * a, b);
		int ones = (n%2) * a;
		total  = twos + ones;
		cout<<total<<endl;
	}
	return 0;
}