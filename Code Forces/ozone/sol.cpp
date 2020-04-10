#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	long long arr[400005];
	long long val;
	for (int i = 0; i < n; ++i){
		cin>>val;
		arr[i] = val;
	}

	int  total = 1;
	for (int i = 0; i < n-1; ++i)
		for (int j = i+1; j < n; ++j)
			total *= abs(arr[i]-arr[j])%m;

	cout<<total%m<<endl;
	return 0;
}