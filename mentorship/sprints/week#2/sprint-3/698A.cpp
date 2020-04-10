#include <bits/stdc++.h>
using namespace std;
int n;
int arr[101];
int dp[101][5];

int solve(int i, int pre){
	if(i == n) return 0;
	if(dp[i][pre] != -1) return dp[i][pre];

	dp[i][pre] = solve(i+1, 0) + 1;
	if(arr[i] == 1 && pre != 1)
		dp[i][pre] = min(dp[i][pre], solve(i+1, 1));
	if(arr[i] == 2 && pre != 2)
		dp[i][pre] = min(dp[i][pre], solve(i+1, 2));
	if(arr[i] == 3 && pre != 2)
		dp[i][pre] = min(dp[i][pre], solve(i+1, 2));
	if(arr[i] == 3 && pre != 1)
		dp[i][pre] = min(dp[i][pre], solve(i+1, 1));

	return dp[i][pre];
}

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	memset(dp, -1, sizeof dp);
	cout<<solve(0,0)<<endl;
	return 0;
}