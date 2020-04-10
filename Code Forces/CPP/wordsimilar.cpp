#include <bits/stdc++.h>
using namespace std;
int n;
string s;
long long dp[70][70];

long long solve(int i, int j){
	if(i>j) return 1;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = solve(i+1, j) + solve(i, j-1);
	if(s[i] != s[j])
		dp[i][j] -= solve(i+1, j-1);

	return dp[i][j];
}

int main(){
	cin>>n;
	cin.ignore();
	for (int i = 1; i <= n; ++i){
		getline(cin, s);
		memset(dp, -1, sizeof dp);
		printf("%lld\n", solve(0, s.length()-1)-1);
	}


	return 0;
}