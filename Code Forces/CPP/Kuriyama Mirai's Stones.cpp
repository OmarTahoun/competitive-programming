#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	long long a[100001], b[100001];
	a[0] = 0;
	b[0] = 0;
	long long suma = 0, sumb=0, val;
	cin>>n;
	for (int i = 1; i <=n; ++i){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b, b+n+1);
	for (int i = 1; i <=n; ++i){
		suma += a[i];
		a[i] = suma;

		sumb += b[i];
		b[i] = sumb;
	}

	int type, l, r;
	cin>>m;
	for (int i = 0; i < m; ++i){
		cin>>type>>l>>r;
		if (type == 1)
			cout<<a[r]-a[l-1]<<endl;
		else
			cout<<b[r]-b[l-1]<<endl;
	}
	return 0;
}