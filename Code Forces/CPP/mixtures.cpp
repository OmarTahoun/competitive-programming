#include <bits/stdc++.h>
using namespace std;
#define VeryBig 1e17;

int n;
int arr[101];
long long dp[101][101];

long long getRange(int i, int j){
	int res = (arr[j] - (i > 0 ? arr[i-1] : 0) + 100) % 100;
	return res;
}

long long solve(int i, int j){
	if(i == j) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = VeryBig;
	for (int k = i; k <= j; ++k){
		dp[i][j] = min(dp[i][j], solve(i, k) + solve(k + 1, j) + 
							getRange(i, k) * getRange(k + 1, j));
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
		cout<<solve(0, n - 1)<<endl;
	}
	return 0;
}