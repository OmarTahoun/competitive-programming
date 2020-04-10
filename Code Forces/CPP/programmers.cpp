#include <bits/stdc++.h>
using namespace std;
int n, m, b;
long long mod;
int arr[501];
int dp[501][501][501];

int solve(int i, int j, int k){
	if(k > b) return 0;
	if(i == n && j != m) return 0;
	if(j == m && k <= b) return 1;

	if(dp[i][j][k] != -1) return dp[i][j][k];

	dp[i][j][k] = 501;
	dp[i][j][k] = min(dp[i][j][k], solve(i+1, j, k));
	dp[i][j][k] = min(dp[i][j][k], solve(i+1, j+1, k+1) + arr[i]);

	return (dp[i][j][k] % mod);

}

int main(){
	scanf("%d %d %d %lld", &n, &m, &b, &mod);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	memset(dp, -1, sizeof dp);
	cout<<solve(0, 0, 0)<<endl;


	return 0;
}