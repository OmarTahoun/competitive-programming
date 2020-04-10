#include <bits/stdc++.h>
using namespace std;
int n;
int coins[101];
int dp[101][500001];
int total;
int solve(int idx, int sum){
	if(idx == n) return (abs(sum-(total-sum)));
	if(dp[idx][sum] != -1) return dp[idx][sum];

	dp[idx][sum] = min(solve(idx+1, sum), solve(idx+1, sum+coins[idx]));

	return dp[idx][sum];
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		memset(dp, -1, sizeof dp);
		total = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i){
			cin>>coins[i];
			total += coins[i];
		}
		cout<<solve(0, 0)<<endl;
	}
	return 0;
}