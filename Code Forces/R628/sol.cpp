#include <bits/stdc++.h>
using namespace std;

int t;
int n;
int arr[100001];
int dp[100001][100001];

// // bool check(long long x){
// // 	long double r = sqrt(x);
// // 	return ((r-floor(r)) == 0);
// // }

// int solve(int i, int cnt, long long total){
// 	if(i==n){
// 		// if(check(total) == true)
// 		// 	return cnt;
// 		return 100005;
// 	}

// 	if(dp[i][cnt] != -1) return dp[i][cnt];
// 	dp[i][cnt] = 100005;
// 	// dp[i][cnt] = min(dp[i][cnt], solve(i+1, cnt, total));
// 	// dp[i][cnt] = min(dp[i][cnt], solve(i+1, cnt+1, total*arr[i]));
// 	return dp[i][cnt];

// }

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		memset(dp, -1, sizeof dp);
		// cout<<solve(0, 0, 1)<<endl;
	}


	return 0;
}