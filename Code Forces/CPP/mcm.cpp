#include <bits/stdc++.h>
using namespace std;

int n;
int arr[101];
long long dp[101][101];

long long getrange(int i, int  j){
	return (arr[j] - (i>0 ? arr[i-1]:0) + 100)%100;
}

long long solve(int i, int j){
	if(i==j) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = 1e17;
	for (int k = i; k < j; ++k){
		dp[i][j] = min(dp[i][j],
					solve(i, k) + solve(k+1, j)+
					getrange(i, k) * getrange(k+1, j));	
	}
	return dp[i][j];
}

int main(){
	while(scanf("%d", &n) != EOF){
		for (int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		for (int i = 1; i < n; ++i){
			arr[i] += arr[i-1];
			arr[i] %= 100;
		}

		memset(dp, -1, sizeof dp);
		printf("%lld\n", solve(0, n-1));
	}
	return 0;
}