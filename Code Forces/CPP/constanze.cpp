#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;

string s;
int n;
int dp[100005];

int solve(int i){
	if(i == n) return 1;
	if(dp[i] != -1) return dp[i];

	dp[i] = solve(i+1);
	
	if(i + 1 < n){
		if(s[i] == s[i+1] && (s[i] == 'u' || s[i] == 'n')){
			dp[i] += solve(i+2);
			dp[i] %= mod;
		}
	}
	return dp[i];
}
int main(){
	memset(dp, -1, sizeof dp);
	cin>>s;
	for(char c:s)
		if(c == 'w' || c == 'm'){
			cout<<0<<endl;
			return 0;
		}

	n = (int)s.size();
	cout<<solve(0)<<endl;
	return 0;
}