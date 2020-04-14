#include <bits/stdc++.h>
using namespace std;

string s, t;
int dp[3001][3001];

int solve(int i, int j){
	if(i == s.size() || j == t.size())	return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = max(solve(i+1, j), solve(i, j+1));

	if(s[i] == t[j])
		dp[i][j] = max(dp[i][j], solve(i+1, j+1) + 1);

	return dp[i][j];
}

void Tsolve(int i, int j){
	if(i == s.size() || j == t.size()){
		cout<<'\n';
		return;
	}

	if(s[i] == t[j]){
		int a = solve(i+1, j+1) + 1;
		cout<<s[i];
		Tsolve(i+1, j+1);
	}
	else{
		int b = solve(i+1, j);
		int c = solve(i, j+1);

		if(b>c)
			Tsolve(i+1, j);
		else
			Tsolve(i, j+1);
	}
	return;
}

int main(){
	cin>>s>>t;
	memset(dp, -1, sizeof dp);
	int ans = solve(0, 0);
	Tsolve(0,0);
	return 0;
}