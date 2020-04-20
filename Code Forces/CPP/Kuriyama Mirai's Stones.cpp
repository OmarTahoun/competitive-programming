#include <bits/stdc++.h>
using namespace std;

int n, m, type, l, r;
long long v[100005], a[100005];

int main(){
	cin>>n;
	v[0] = 0;
	a[0] = 0;
	
	for(int i = 1; i <= n; ++i){
		cin>>v[i];
		a[i] = v[i];
	}
	
	sort(a, a+n+1);
	for(int i = 2; i <= n; ++i){
		v[i] += v[i-1];
		a[i] += a[i-1];
	}
	
	cin>>m;
	for(int i = 0; i<m; ++i){
		cin>>type>>l>>r;
		if(type==2)
			cout<<a[r] - a[l-1]<<endl;
		else
			cout<<v[r] - v[l-1]<<endl;
	}
	return 0;
}
