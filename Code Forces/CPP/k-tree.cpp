#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int n, k, d;
int dp[101][2];
int solve(int curr, int taken){
	if(curr ==  n) return taken;
	int &ret = dp[curr][taken];
	if(~ret) return ret;
	ret = 0;
	for (int i = 1; i <= k; ++i){
		if(curr+i <= n){
			ret += solve(curr+i, taken || i>=d);
			ret%=mod;
		}
	}
	return ret;
}
int main(){
	cin >>n>>k>>d;
	memset(dp, -1, sizeof dp);
	cout<<solve(0, 0)<<endl;
	return 0;
}