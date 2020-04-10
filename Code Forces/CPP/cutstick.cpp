#include <bits/stdc++.h>
using namespace std;
int l;
int n;
int arr[55];
long long dp[55][55];

long long solve(int i, int j){
	if(j - i == 1) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = 1e17;

	for (int k = i; k <= j; ++k){
		dp[i][j] = min(dp[i][j], 
				solve(i , k) + solve(k, j) 
				+ (arr[j]-arr[i]));
	}
	return dp[i][j];
}

int main(){
	while(scanf("%d", &l) && l){
		scanf("%d", &n);
		arr[0] = 0;
		for (int i = 1; i <=n; ++i)
			scanf("%d", &arr[i]);
		arr[n+1] = l;

		memset(dp, -1, sizeof dp);
		printf("The minimum cutting is %lld.\n", solve(0, n + 1));
	}
	return 0;
}