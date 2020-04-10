#include <bits/stdc++.h>
using namespace std;
const int mod =  1000000;
int n, k;
int dp[105][105];
int solve(int i, int cnt){
	if(i == n || cnt == k-1) return 1;
	if(dp[i][cnt] != -1) return dp[i][cnt];
	
	dp[i][cnt] = 0;
	for (int x = 0; x <= i; ++x){
		dp[i][cnt] += solve(i+x, cnt-1);
		dp[i][cnt] %= mod;
	}
	return dp[i][cnt];
}

int main(){
	memset(dp, -1, sizeof dp);
	while(scanf("%d %d", &n, &k) && n){
		cout<<solve(0, 1)<<endl;
	}
	return 0;
}