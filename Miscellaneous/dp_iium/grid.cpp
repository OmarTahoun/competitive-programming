#include <bits/stdc++.h>
using namespace std;
int h, w;
string grid[1001];
long long dp[1001][1001];

long long solve(int i, int j){
	if(i == h-1 && j == w-1) return 1;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = 0;
	if(grid[i+1][j] == '.' && i+1 <= h-1)
		dp[i][j] += solve(i+1, j);
	if(grid[i][j+1] == '.' && j+1 <= w-1)
		dp[i][j] += solve(i, j+1);

	dp[i][j] %= 1000000007;
	return dp[i][j];
}
int main(){
	cin>>h>>w;
	for (int i = 0; i < h; ++i)
		cin>>grid[i];
	memset(dp, -1, sizeof dp);
	cout<<solve(0, 0)<<endl;


	return 0;
}