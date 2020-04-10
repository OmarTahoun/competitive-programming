#include <bits/stdc++.h>
using namespace std;

long long dp[5][7490];
int n;
int coins[5] = {1,5,10,25,50};

long long solve(long long left, int i){
	if(i == 5 && left > 0) return 0;
	if(left < 0) return 0;
	if(left == 0) return 1;
	if(dp[i][left] != -1) return dp[i][left];

	dp[i][left] = solve(left, i+1);

	if(left-coins[i] >= 0)
		dp[i][left] += solve(left-coins[i], i);

	return dp[i][left];
}
int main(){
	memset(dp, -1, sizeof dp);
	while(scanf("%d", &n) != EOF){
		cout<<solve(n, 0)<<endl;
	}
	return 0;
}