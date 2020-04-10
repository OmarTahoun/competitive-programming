#include <bits/stdc++.h>
using namespace std;

string s, t;
int dp[1010][1010];

int solve(int i, int j){
	if(i == s.size() || j == t.size())	return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = max(solve(i+1, j), solve(i, j+1));

	if(s[i] == t[j])
		dp[i][j] = max(dp[i][j], solve(i+1, j+1) + 1);

	return dp[i][j];
}

int main(){
	while(getline(cin, s)){
		getline(cin, t);
		memset(dp, -1, sizeof dp);
		cout<<solve(0, 0)<<endl;
	}
	return 0;
}