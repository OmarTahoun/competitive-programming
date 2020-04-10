#include <bits/stdc++.h>
using namespace std;
int T;
string str;
int dp[1010][1010];

int solve(int i, int j){
	if(i>=j) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	dp[i][j] = min(solve(i+1, j), solve(i, j-1)) + 1;
	dp[i][j] = min(dp[i][j], solve(i+1, j-1) + (str[i] != str[j]));
	
	return dp[i][j];
}

int main(){
	cin>>T;
	cin.ignore();
	for (int i =1; i <= T; ++i){
		getline(cin, str);
		memset(dp, -1, sizeof dp);
		printf("Case %d: %d\n", i, solve(0, str.size()-1));
	}


	return 0;
}