#include <bits/stdc++.h>
using namespace std;

long long n, x, arr[100005];
long long ans = 0;

int main(){
	cin>>n>>x;
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	for(int i = 0; i < n; i++){
		ans += arr[i] * x;
		if(x > 1) x--;
	}

	cout<<1LL*ans<<endl;
	return 0;
}