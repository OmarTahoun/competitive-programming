#include <bits/stdc++.h>
using namespace std;
int n, C;
int w[101];
long long v[101];

long long dp[101][100005];


long long solve(int i, int left){
	if(i == n) return 0;
	if(dp[i][left] != -1) return dp[i][left];
	
	dp[i][left] = solve(i+1, left);
	if(left >= w[i]){
		dp[i][left] = max(dp[i][left], solve(i+1, left-w[i]) + v[i]);
	}
	
	return dp[i][left];
}

int main(){
	cin>>n>>C;

	for (int i = 0; i < n; ++i)
		cin>>w[i]>>v[i];

	memset(dp, -1, sizeof dp);
	cout<<solve(0, C)<<endl;

	return 0;
}
