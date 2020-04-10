#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int t,k;
int a, b;
int arr[100005];

int solve(int x){
	if(x==0)
		return 1;
	if(arr[x] != -1)
		return arr[x];
	arr[x] = solve(x-1);
	if(x>=k){
		arr[x] += solve(x-k);
		arr[x] %= mod;
	}
	return arr[x];
}
int main(){
	cin>>t>>k;
	memset(arr, -1, sizeof arr);
	for (int i = 1; i <= 100000; ++i)
		arr[i] = solve(i);
	for (int i = 1; i <= 100000; ++i){
		arr[i] += arr[i-1];
		arr[i] %= mod;
	}
	for (int i = 0; i < t; ++i){
		cin>>a>>b;
		cout<<(arr[b]-arr[a-1] + mod)%mod<<endl;
	}




	return 0;
}