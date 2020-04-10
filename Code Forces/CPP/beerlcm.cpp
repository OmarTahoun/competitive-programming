#include <bits/stdc++.h>
using namespace std;
string a, b;
int dp[1001][1001];

int solve(int i, int j){
	if(i == a.size() || j == b.size()) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = max(solve(i + 1, j), solve(i, j+1));

	if(a[i] == b[j])
		dp[i][j] = max(dp[i][j], solve(i+1, j+1) + 1);
	return dp[i][j];
}

int main(){
	while(getline(cin, a)){
		getline(cin, b);
		memset(dp, -1, sizeof dp);
		cout<<solve(0, 0)<<endl;
	}


	return 0;
}