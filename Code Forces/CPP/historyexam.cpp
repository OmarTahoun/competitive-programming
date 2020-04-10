#include <bits/stdc++.h>
using namespace std;
int n;
int arr[22];
int tmp[22];
int dp[22][22];

int solve(int i, int j){
	if(i == n || j == n) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = max(solve(i + 1, j), solve(i, j + 1));

	if(arr[i] == tmp[j])
		dp[i][j] = max(dp[i][j], solve(i+1, j+1) + 1);

	return dp[i][j];
}

int main(){
	int val;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d", &val);
		val--;
		arr[val] = i;
	}

	while(scanf("%d", &val) == 1){
		val--;
		tmp[val] = 0;
		for (int i = 1; i < n; ++i){
			scanf("%d", &val);
			val--;
			tmp[val] = i;
		}

		memset(dp, -1, sizeof dp);
		cout<<solve(0,0)<<endl;
	}
	return 0;
}