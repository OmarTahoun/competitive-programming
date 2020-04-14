#include <bits/stdc++.h>
using namespace std;
int n;
long long h[100005];
long long dp[100005];

long long solve(int i){
	if(i >= n-1) return 0;
	if(dp[i] != -1) return dp[i];

	dp[i] = 1e17;
	if(i+1 <= n-1)
		dp[i] = min(dp[i], abs(h[i] - h[i+1]) + solve(i+1));
	if(i+2 <= n-1)
		dp[i] = min(dp[i], abs(h[i] - h[i+2]) + solve(i+2));

	return dp[i];
}

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%lld", &h[i]);
	memset(dp, -1, sizeof dp);
	cout<<solve(0)<<endl;
	return 0;
}