#include <bits/stdc++.h>
using namespace std;

int n;
long long a, b, x;
int main(){
	cin>>n>>a>>b;
	for(int i  = 0; i < n; i++){
		cin>>x;
		cout<<1LL*(((x*a) % b) / a)<<" ";
	}
	cout<<endl;
	return 0;
}