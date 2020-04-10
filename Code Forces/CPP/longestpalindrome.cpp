#include <bits/stdc++.h>
using namespace std;
int t;
string str;
int dp[1010][1010];

int solve(int i, int j){
	if(i>j) return 0;
	if(i==j) return 1;
	if(dp[i][j] != -1) return dp[i][j];

	if(str[i] != str[j])
		dp[i][j] = max(solve(i+1, j), solve(i, j-1));	
	else
		dp[i][j] = solve(i+1, j-1) + 2;

	return dp[i][j];
}

int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin, str);
		memset(dp, -1, sizeof dp);
		printf("%d\n",solve(0, str.length()-1));
	}


	return 0;
}