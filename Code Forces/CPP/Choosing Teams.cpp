#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, count=0;
	int a[2001];
	cin >> n >>k;

	for (int i = 0; i < n; ++i){
		cin>>a[i];
		a[i] = 5-a[i];
		if(a[i]>=k)
			count+=1;
	}

	cout<<count/3<<endl;
	return 0;
}