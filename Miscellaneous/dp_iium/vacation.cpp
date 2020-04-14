#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100005][3];

int dp[100005][4];

int solve(int i, int prev){
	if(i == n) return 0;
	if(dp[i][prev] != -1) return dp[i][prev];

	dp[i][prev] = -1e7;
	int a = 0, b = 0, c = 0;
	if(prev != 0)
		a = solve(i+1, 0) + arr[i][0];
	if(prev != 1)
		b = solve(i+1, 1) + arr[i][1];
	if(prev != 2)
		c = solve(i+1, 2) + arr[i][2];

	dp[i][prev] = max(a, max(b, c));
	return dp[i][prev];
}

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];

	memset(dp, -1, sizeof dp);
	cout<<solve(0, 3)<<endl;
	return 0;
}