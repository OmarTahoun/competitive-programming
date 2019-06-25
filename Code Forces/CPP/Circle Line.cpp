#include <bits/stdc++.h>
using namespace std;

int a[101];

void check_path(int s,int t, int n){
	long long left=0, right=0;
	for (int i = s; i < t; ++i)
		right+=a[i];

	for (int i = s; i >0; --i)
		left+=a[i-1];
	
	for (int i = n; i > t; --i)
		left+=a[i-1];
	

	cout<<min(left, right)<<endl;
}

int main(){
	int n,s,t;
	cin>>n;

	for (int i = 0; i < n; ++i)
		cin>>a[i];
	cin>>s>>t;
	--s;
	--t;
	check_path(min(s,t), max(s,t), n);
	return 0;
}