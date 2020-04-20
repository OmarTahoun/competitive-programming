#include <bits/stdc++.h>
using namespace std;


int n, k;
long long arr[200005];
int main(){
	cin>>n>>k;
	k--;
	arr[0] = 0;
	for(int  i = 1; i <= n; i++)
		cin>>arr[i];
	
	for(int i = 2; i <= n; i++)
		arr[i] += arr[i-1];

	long long best = 1e17;
	int id = 0;
	for(int i = 1; i <= n-k; i++){
		long long cur = arr[i+k] - arr[i-1];
		if(cur < best){
			best = cur;
			id = i;
		}
	}
	cout<<id<<endl;
	return 0;
}