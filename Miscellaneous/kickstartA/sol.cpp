#include <bits/stdc++.h>
using namespace std;
int t;
int arr[100001];
int n, b;
int main(){
	cin>>t;
	for (int k = 1; k <=t; ++k){
		cin>>n>>b;
		int ans = 0, paid = 0;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];

		sort(arr, arr+n);

		for (int i = 0; i < n; ++i){
			if(paid >= b) break;
			if(paid+arr[i] <= b){
				paid += arr[i];
				ans+=1;
			}
		}
		printf("Case #%d: %d\n", k, ans);
	}
	return 0;
}