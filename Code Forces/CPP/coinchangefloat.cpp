#include <bits/stdc++.h>
using namespace std;

unsigned long long dp[11][30001];
double n;
int coins[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

unsigned long long solve(long long left, int i){
	if(i == 11 && left > 0) return 0;
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
	while(scanf("%lf", &n) && n){
		int val = int((n*100)+0.01);
		printf("%6.2lf%17lld\n", n, solve(val, 0));
	}
	return 0;
}